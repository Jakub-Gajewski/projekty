#include "userAccount.h"
#include <iostream>
#include <regex>

UserAccount::UserAccount(
    const std::string& s_AccountType_
    ,const std::string& s_AccountStatus_
    ,const std::string& s_Email_
    ,const std::string& s_Login_
    ,const std::string& s_Password_
    ,const std::string& s_AccountNumber_
    ) : s_AccountType{s_AccountType_}
    ,s_AccountStatus{s_AccountStatus_}
    ,s_Email{s_Email_}
    ,s_Login{s_Login_}
    ,s_Password{s_Password_}
    ,s_AccountNumber{s_AccountNumber_}
{
    std::cout << "Constructor of a user" << std::endl;
}

UserAccount::~UserAccount()
{
    std::cout << "Destructor of a user" << std::endl;
}

void UserAccount::logIn(std::string s_login_, std::string s_password_)
{
    auto isCorrectLogin{s_Login == s_login_};
    auto isCorrectPassword{s_Password == s_password_};
    auto isAccountBlocked{s_AccountStatus == "blocked"};

    if (isCorrectLogin && isCorrectPassword && !isAccountBlocked)
    {
        b_Login = true;
        std::cout << "Login successful" << std::endl;
        i_FailedAttempts = 0;
    }
    else
    {
        std::cout << "Login failed" << std::endl;
        i_FailedAttempts += 1;

        if (i_FailedAttempts == 5)
        {
            s_AccountStatus = "blocked";
            std::cerr << "5 incorrect password attempts, the account has been locked" << std::endl;
        }
    }
}


void UserAccount::logOut()
{
    b_Login = false;
    std::cout << "Logout successful" << std::endl;
}

void UserAccount::setPassword(std::string s_nPass)
{
    if (!isLoggedIn()) return;

    s_Password = s_nPass;
    std::cout << "Password changed." << std::endl;
}

void UserAccount::contributeMoney(int i_quantity_)
{
    if (!isLoggedIn()) return;

    auto isPositiveAmount{i_quantity_ > 0};
    if (isPositiveAmount)
    {
        i_AccountBalance += i_quantity_;
        std::cout << "Funds deposit successful" << std::endl;
    }
    else
    {
        std::cout << "The deposit amount is equal to or less than 0" << std::endl;
    }
}


void UserAccount::withdrawMoney(int i_quantity_)
{
    if (!isLoggedIn()) return;

    if (i_quantity_ > 0 && i_AccountBalance >= i_quantity_)
    {
        i_AccountBalance -= i_quantity_;
        std::cout << "Funds withdrawal successful" << std::endl;
    } else
    {
        std::cout << "Insufficient funds in the account" << std::endl;
    }
}

int UserAccount::getBalance() const
{
    if (!isLoggedIn()) return 0;

    return i_AccountBalance;
}

void UserAccount::changeEmail(std::string s_newEmail)
{
    if (b_Login && validateEmail(s_newEmail))
    {
        s_Email = s_newEmail;
        std::cout << "User email changed" << std::endl;
    } else
    {
        std::cerr << "Uncorrect password" << std::endl;
    }
}

std::string UserAccount::getAccType() const
{
    if (!isLoggedIn()) return "Unknown";

    return s_AccountType;
}

std::string UserAccount::getAccStatus() const
{
    if (!isLoggedIn()) return "Unknown";

    return s_AccountStatus;
}

std::string UserAccount::getEmail() const
{
    if (!isLoggedIn()) return "Nieznany";

    return s_Email;
}

std::string UserAccount::getLogin() const
{
    if (!isLoggedIn()) return "Nieznany";

    return s_Login;
}

bool UserAccount::isLoggedIn() const
{
    if (!b_Login)
    {
        std::cerr << "You need to log in" << std::endl;
        return false;
    }
    return true;
}

bool UserAccount::validateEmail(std::string& s_email)
{
    auto emailRegex{std::regex(R"((\w+)(\.{1}\w+)*@(\w+)(\.\w{2,})+)")};
    return std::regex_match(s_email, emailRegex);
}

