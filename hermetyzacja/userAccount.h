#ifndef USERACCOUNT_H
#define USERACCOUNT_H

#include <iostream>

class UserAccount
{
public:
    UserAccount(std::string sAccountType_,
                std::string sAccountStatus_,
                std::string sEmail_,
                std::string sLogin_,
                std::string sPassword_,
                std::string sAccountNumber_);

    ~UserAccount();

    void login(std::string login_);

    void setPassword(std::string nPass);

    void contributeMoney(int quantity_);

    void withdrawMoney(int quantity_);

    int getBalance() const;

    void changeEmail(std::string newEmail);

    std::string getAccType() const;

    std::string getAccStatus() const;

private:
    bool validateEmail(std::string email);

    std::string hashPassword(const std::string& password);

    bool isLoggedIn() const;

protected:
    std::string sAccountType = "osobiste";
    std::string sAccountStatus = "aktywny";
    bool bLogin = false;
    std::string sEmail;
    std::string sLogin;
    std::string sPassword;

private:
    int iAccountBalance = 0;
    int iFailedAttempts = 0;
    std::string sAccountNumber = 0;
};

#endif // USERACCOUNT_H
