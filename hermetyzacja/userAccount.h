#ifndef USERACCOUNT_H
#define USERACCOUNT_H

#include <iostream>

class UserAccount {

public:
    UserAccount(std::string sAccountType_, std::string sAccountStatus_, std::string sEmail_, std::string sLogin_, std::string sPassword_, int iAccountBalance_, std::string sAccountNumber_, int iFailedAttempts_);

    ~UserAccount();

    void setPassword(std::string o_pass, std::string n_pass);

    void contributeMoney(std::string password_, int quantity_);

    void withdrawMoney(std::string password_, int quantity_);

    void getBalance(std::string password_);

    void changeEmail(std::string password_, std::string new_email);

    std::string getAccType() const;

    std::string getAccStatus() const;

private:
    void logOperation(std::string operation);
    bool validateEmail(std::string email);

protected:
    std::string sAccountType = "osobiste";
    std::string sAccountStatus = "aktywny";

private:
    int iAccountBalance = 0;
    int iFailedAttempts = 0;
    std::string sEmail;
    std::string sLogin;
    std::string sPassword;
    std::string sAccountNumber = 0;
};

#endif // USERACCOUNT_H
