#include "userAccount.h"
#include <iostream>

UserAccount::UserAccount(
    std::string sAccountType_,
    std::string sAccountStatus_,
    std::string sEmail_,
    std::string sLogin_,
    std::string sPassword_,
    int iAccountBalance_,
    std::string sAccountNumber_,
    int iFailedAttempts_
    ) : sAccountType(sAccountType_),
    sAccountStatus(sAccountStatus_),
    sEmail(sEmail_),
    sLogin(sLogin_),
    sPassword(sPassword_),
    iAccountBalance(iAccountBalance_),
    sAccountNumber(sAccountNumber_),
    iFailedAttempts(iFailedAttempts_)
{
    cout << "Utworzono konto uzytkownika" << endl;
}

UserAccount::~UserAccount()
{
    cout << "Destruktor konta uzytkownika" << endl;
}

void UserAccount::setPassword(std::string o_pass, std::string n_pass)
{
    if (o_pass == sPassword)
    {
        sPassword = n_pass;
        cout << "Zmieniono haslo" << endl;
    } else
    {
        std::cerr << "Nieprawidlowe (stare) haslo" << endl;
    }
}

void UserAccount::contributeMoney(std::string password_, int quantity_)
{
    if (password_ == sPassword && quantity_ > 0)
    {
        iAccountBalance += quantity_;
        cout << "Zmieniono stan konta" << endl;
    } else
    {
        cout << "Nieprawidlowe haslo lub kwota wplaty jest rowna/mniejsza od 0" << endl;
    }
}

void UserAccount::withdrawMoney(std::string password_, int quantity_) {
    if (password_ == sPassword && quantity_ > 0 && iAccountBalance >= quantity_)
    {
        iAccountBalance -= quantity_;
        cout << "Zmieniono stan konta" << endl;
    }else
    {
        cout << "Nieprawidlowe haslo lub brak srodkow na koncie" << endl;
    }
}

void UserAccount::getBalance(std::string password_)
{
    if (password_ == sPassword)
    {
        return iAccountBalance;
    } else
    {
        std::cerr << "Nieprawidlowe haslo" << endl;
    }
}

std::string UserAccount::getAccType() const
{
    return sAccountType;
}

std::string UserAccount::getAccStatus() const
{
    return sAccountStatus;
}

