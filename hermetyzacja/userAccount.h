#ifndef USERACCOUNT_H
#define USERACCOUNT_H

#include <iostream>

class UserAccount {

public:
    UserAccount(std::string sAccountType_, std::string sAccountStatus_, std::string sEmail_, std::string sLogin_, std::string sPassword_, int iAccountBalance_, std::string sAccountNumber_, int iFailedAttempts_);

    ~UserAccount();

    void login(std::string login_, std::string password_);

    void setPassword(std::string oPass, std::string nPass);

    void contributeMoney(std::string password_, int quantity_);

    void withdrawMoney(std::string password_, int quantity_);

    int getBalance(std::string password_) const;

    void changeEmail(std::string password_, std::string newEmail);

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

private:
    int iAccountBalance = 0;
    int iFailedAttempts = 0;
    std::string sEmail;
    std::string sLogin;
    std::string sPassword;
    std::string sAccountNumber = 0;
};

#endif // USERACCOUNT_H
