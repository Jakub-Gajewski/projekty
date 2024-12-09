#ifndef USERACCOUNT_H
#define USERACCOUNT_H

#include <iostream>
#include "adminAccount.h"

class UserAccount {
public:
    UserAccount(const std::string& sAccountType_,
                const std::string& sAccountStatus_,
                const std::string& sEmail_,
                const std::string& sLogin_,
                const std::string& sPassword_,
                const std::string& sAccountNumber_);

    ~UserAccount();

    void logIn(std::string login_, std::string password_);

    void logOut();

    void setPassword(std::string nPass);

    void contributeMoney(int quantity_);

    void withdrawMoney(int quantity_);

    int getBalance() const;

    void changeEmail(std::string newEmail);

    std::string getAccType() const;

    std::string getAccStatus() const;

    std::string getEmail() const;

    std::string getLogin() const;

protected:
    bool isLoggedIn() const;

private:
    bool validateEmail(std::string email);

    std::size_t hashPassword(const std::string& password);

private:
    std::string sAccountType = "osobiste";
    std::string sAccountStatus = "aktywny";
    bool bLogin = false;
    std::string sEmail;
    std::string sLogin;
    std::string sPassword;
    int iAccountBalance = 0;
    int iFailedAttempts = 0;
    std::string sAccountNumber = 0;
};

#endif // USERACCOUNT_H
