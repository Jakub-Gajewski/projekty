#ifndef USERACCOUNT_H
#define USERACCOUNT_H

#include <iostream>

class UserAccount {
public:
    UserAccount(
        const std::string& sAccountType_
        ,const std::string& sAccountStatus_
        ,const std::string& sEmail_
        ,const std::string& sLogin_
        ,const std::string& sPassword_
        ,const std::string& sAccountNumber_
        );

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

    friend class AdminAccount;

protected:

    bool isLoggedIn() const;

    void setAccountStatus(const std::string& newStatus);

    void changeAccountType(const std::string& newType);

private:
    bool validateEmail(std::string& email);

protected:
    bool bLogin = false;

private:
    std::string sAccountType = "osobiste";
    std::string sAccountStatus = "aktywny";
    std::string sEmail;
    std::string sLogin;
    std::string sPassword;
    int iAccountBalance = 0;
    int iFailedAttempts = 0;
    std::string sAccountNumber = 0;
};

#endif // USERACCOUNT_H
