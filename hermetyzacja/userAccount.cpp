#include "userAccount.h"
#include <iostream>
#include <functional>
#include <regex>

UserAccount::UserAccount(
    const std::string& sAccountType_,
    const std::string& sAccountStatus_,
    const std::string& sEmail_,
    const std::string& sLogin_,
    const std::string& sPassword_,
    const std::string& sAccountNumber_
    ) : sAccountType(sAccountType_),
    sAccountStatus(sAccountStatus_),
    sEmail(sEmail_),
    sLogin(sLogin_),
    sPassword(hashPassword(sPassword_)),
    sAccountNumber(sAccountNumber_)
{
    std::cout << "Utworzono konto uzytkownika" << std::endl;
}

UserAccount::~UserAccount()
{
    std::cout << "Destruktor konta uzytkownika" << std::endl;
}

void UserAccount::login(std::string login_, std::string password_)
{
    if (sLogin == login_ && sPassword == password_)
    {
        bLogin = true;
        std::cout << "Logowanie pomyślne" << std::endl;
        iFailedAttempts = 0;
    } else
    {
        std::cout << "Nieudane logowanie" << std::endl;
        iFailedAttempts += 1;

        if(iFailedAttempts == 5)
        {
            sAccountStatus = "Zablokowane";
            std::cerr << "Wpisano 5 razy niepoprawne chaslo, konto zastało zablokowane" << std::endl;
        }
    }
}

void UserAccount::setPassword(std::string nPass)
{
    if (!isLoggedIn()) return;

    sPassword = hashPassword(nPass);
    std::cout << "Zmieniono haslo" << std::endl;
}

void UserAccount::contributeMoney(int quantity_)
{
    if (!isLoggedIn()) return;

    if (quantity_ > 0)
    {
        iAccountBalance += quantity_;
        std::cout << "Wpłata srodkow pomyślna" << std::endl;
    } else
    {
        std::cout << "kwota wplaty jest rowna/mniejsza od 0" << std::endl;
    }
}

void UserAccount::withdrawMoney(int quantity_)
{
    if (!isLoggedIn()) return;

    if (quantity_ > 0 && iAccountBalance >= quantity_)
    {
        iAccountBalance -= quantity_;
        std::cout << "Wypłata środków pomyślna" << std::endl;
    }else
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

bool UserAccount::validateEmail(std::string email)
{
    std::regex emailRegex(R"((\w+)(\.{1}\w+)*@(\w+)(\.\w{2,})+)");
    return std::regex_match(email, emailRegex);
}

std::size_t UserAccount::hashPassword(const std::string& password) {
    return std::hash<std::string>{}(password);
}

bool UserAccount::isLoggedIn() const
{
    if (!bLogin)
    {
        std::cerr << "Musisz się zalogować." << std::endl;
        return false;
    }
    return true;
}


