#include "userAccount.h"
#include <regex>

UserAccount::UserAccount(
    const std::string& sAccountType_
    ,const std::string& sAccountStatus_
    ,const std::string& sEmail_
    ,const std::string& sLogin_
    ,const std::string& sPassword_
    ,const std::string& sAccountNumber_
    ) : sAccountType(sAccountType_)
    ,sAccountStatus(sAccountStatus_)
    ,sEmail(sEmail_)
    ,sLogin(sLogin_)
    ,sPassword(sPassword_)
    ,sAccountNumber(sAccountNumber_)
{
    std::cout << "Utworzono konto uzytkownika" << std::endl;
}

UserAccount::~UserAccount()
{
    std::cout << "Destruktor konta uzytkownika" << std::endl;
}

void UserAccount::logIn(std::string login_, std::string password_)
{
    auto isCorrectLogin = (sLogin == login_);
    auto isCorrectPassword = (sPassword == password_);
    auto isAccountBlocked = (sAccountStatus == "zablokowane");

    if (isCorrectLogin && isCorrectPassword && !isAccountBlocked)
    {
        bLogin = true;
        std::cout << "Logowanie pomyslne" << std::endl;
        iFailedAttempts = 0;
    }
    else
    {
        std::cout << "Nieudane logowanie" << std::endl;
        iFailedAttempts += 1;

        if (iFailedAttempts == 5)
        {
            sAccountStatus = "zablokowane";
            std::cerr << "Wpisano 5 razy niepoprawne haslo, konto zostalo zablokowane" << std::endl;
        }
    }
}


void UserAccount::logOut()
{
    bLogin = false;
    std::cout << "Wylogowanie pomyslne" << std::endl;
}

void UserAccount::setPassword(std::string nPass)
{
    if (!isLoggedIn()) return;

    sPassword = nPass;
    std::cout << "Zmieniono haslo" << std::endl;
}

void UserAccount::contributeMoney(int quantity_)
{
    if (!isLoggedIn()) return;

    auto isPositiveAmount = (quantity_ > 0);
    if (isPositiveAmount)
    {
        iAccountBalance += quantity_;
        std::cout << "Wplata srodkow pomyslna" << std::endl;
    }
    else
    {
        std::cout << "Kwota wplaty jest rowna/mniejsza od 0" << std::endl;
    }
}


void UserAccount::withdrawMoney(int quantity_)
{
    if (!isLoggedIn()) return;

    if (quantity_ > 0 && iAccountBalance >= quantity_)
    {
        iAccountBalance -= quantity_;
        std::cout << "Wyplata srodkow pomyslna" << std::endl;
    } else
    {
        std::cout << "Brak srodkow na koncie" << std::endl;
    }
}

int UserAccount::getBalance() const
{
    if (!isLoggedIn()) return 0;

    return iAccountBalance;
}

void UserAccount::changeEmail(std::string newEmail)
{
    if (bLogin && validateEmail(newEmail))
    {
        sEmail = newEmail;
        std::cout << "Zmieniono emial uzytkownika" << std::endl;
    } else
    {
        std::cerr << "Nieprawidlowe haslo" << std::endl;
    }
}

std::string UserAccount::getAccType() const
{
    if (!isLoggedIn()) return "Nieznany";

    return sAccountType;
}

std::string UserAccount::getAccStatus() const
{
    if (!isLoggedIn()) return "Nieznany";

    return sAccountStatus;
}

std::string UserAccount::getEmail() const
{
    if (!isLoggedIn()) return "Nieznany";

    return sEmail;
}

std::string UserAccount::getLogin() const
{
    if (!isLoggedIn()) return "Nieznany";

    return sLogin;
}

void UserAccount::setAccountStatus(const std::string& newStatus)
{
    sAccountStatus = newStatus;
}

void UserAccount::changeAccountType(const std::string& newType)
{
    sAccountType = newType;
}

bool UserAccount::isLoggedIn() const
{
    if (!bLogin)
    {
        std::cerr << "Musisz sie zalogowac." << std::endl;
        return false;
    }
    return true;
}

bool UserAccount::validateEmail(std::string& email)
{
    auto emailRegex = std::regex(R"((\w+)(\.{1}\w+)*@(\w+)(\.\w{2,})+)");
    return std::regex_match(email, emailRegex);
}

