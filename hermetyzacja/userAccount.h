#ifndef USERACCOUNT_H
#define USERACCOUNT_H

#include <string>

class UserAccount {
public:
    UserAccount(
        const std::string& s_AccountType_
        ,const std::string& s_AccountStatus_
        ,const std::string& s_Email_
        ,const std::string& s_Login_
        ,const std::string& s_Password_
        ,const std::string& s_AccountNumber_
        );

    ~UserAccount();

    friend class AdminAccount;

    void logIn(std::string s_login_, std::string s_password_);

    void logOut();

    void setPassword(std::string s_nPass);

    void contributeMoney(int i_quantity_);

    void withdrawMoney(int i_quantity_);

    int getBalance() const;

    void changeEmail(std::string s_newEmail);

    std::string getAccType() const;

    std::string getAccStatus() const;

    std::string getEmail() const;

    std::string getLogin() const;

protected:

    bool isLoggedIn() const;

private:
    bool validateEmail(std::string& s_email_);

protected:
    bool b_Login = false;
    std::string s_AccountType{"personal "};
    std::string s_AccountStatus{"active"};
    std::string s_Email;
    std::string s_Login;
    std::string s_Password;

private:
    int i_AccountBalance = 0;
    int i_FailedAttempts = 0;
    std::string s_AccountNumber = 0;
};

#endif // USERACCOUNT_H
