#include "userAccount.h"
#include <iostream>
#include <functional>
#include <regex>

// Konstruktor
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

// Destruktor
UserAccount::~UserAccount()
{
    std::cout << "Destruktor konta uzytkownika" << std::endl;
}

// Logowanie
void UserAccount::logIn(std::string login_, std::string password_)
{
    if (sLogin == login_ && sPassword == password_ && sAccountStatus != "zablokowane")
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
            sAccountStatus = "zablokowane";
            std::cerr << "Wpisano 5 razy niepoprawne hasło, konto zostało zablokowane" << std::endl;
        }
    }
}

// Wylogowanie
void UserAccount::logOut()
{
    bLogin = false;
    std::cout << "Wylogowanie pomyślne" << std::endl;
}

// Zmiana hasła
void UserAccount::setPassword(std::string nPass)
{
    if (!isLoggedIn()) return;

    sPassword = hashPassword(nPass);
    std::cout << "Zmieniono hasło" << std::endl;
}

// Wpłata środków
void UserAccount::contributeMoney(int quantity_)
{
    if (!isLoggedIn()) return;

    if (quantity_ > 0)
    {
        iAccountBalance += quantity_;
        std::cout << "Wpłata środków pomyślna" << std::endl;
    } else
    {
        std::cout << "Kwota wpłaty jest równa/mniejsza od 0" << std::endl;
    }
}

// Wypłata środków
void UserAccount::withdrawMoney(int quantity_)
{
    if (!isLoggedIn()) return;

    if (quantity_ > 0 && iAccountBalance >= quantity_)
    {
        iAccountBalance -= quantity_;
        std::cout << "Wypłata środków pomyślna" << std::endl;
    } else
    {
        std::cout << "Brak środków na koncie" << std::endl;
    }
}

// Pobranie salda
int UserAccount::getBalance() const
{
    if (!isLoggedIn()) return 0;

    return iAccountBalance;
}

// Zmiana adresu email
void UserAccount::changeEmail(std::string newEmail)
{
    if (bLogin && validateEmail(newEmail))
    {
        sEmail = newEmail;
        std::cout << "Zmieniono emial użytkownika" << std::endl;
    } else
    {
        std::cerr << "Nieprawidłowe hasło" << std::endl;
    }
}

// Pobranie typu konta
std::string UserAccount::getAccType() const
{
    if (!isLoggedIn()) return "Nieznany";

    return sAccountType;
}

// Pobranie statusu konta
std::string UserAccount::getAccStatus() const
{
    if (!isLoggedIn()) return "Nieznany";

    return sAccountStatus;
}

// Pobranie adresu email
std::string UserAccount::getEmail() const
{
    if (!isLoggedIn()) return "Nieznany";

    return sEmail;
}

// Pobranie loginu
std::string UserAccount::getLogin() const
{
    if (!isLoggedIn()) return "Nieznany";

    return sLogin;
}

// Ustawienie statusu konta (dla administratora)
void UserAccount::setAccountStatus(const std::string& newStatus, const AdminAccount& admin)
{
    if (admin.isLoggedIn()) {
        sAccountStatus = newStatus;
    } else
    {
        std::cerr << "Brak autoryzacji admina!" << std::endl;
    }
}

// Ustawienie typu konta (dla administratora)
void UserAccount::setAccountType(const std::string& newType, const AdminAccount& admin)
{
    if (admin.isLoggedIn()) {
        sAccountType = newType;
    } else
    {
        std::cerr << "Brak autoryzacji admina!" << std::endl;
    }
}

// Sprawdzenie czy użytkownik jest zalogowany
bool UserAccount::isLoggedIn() const
{
    if (!bLogin)
    {
        std::cerr << "Musisz się zalogować." << std::endl;
        return false;
    }
    return true;
}

// Walidacja adresu email
bool UserAccount::validateEmail(std::string email)
{
    std::regex emailRegex(R"((\w+)(\.{1}\w+)*@(\w+)(\.\w{2,})+)");
    return std::regex_match(email, emailRegex);
}

// Haszowanie hasła
std::size_t UserAccount::hashPassword(const std::string& password)
{
    return std::hash<std::string>{}(password);
}
