#include "adminAccount.h"
#include <iostream>

AdminAccount::AdminAccount(
    const std::string& s_AccountType_,
    const std::string& s_AccountStatus_,
    const std::string& s_Email_,
    const std::string& s_Login_,
    const std::string& s_Password_,
    const int i_AdminId_
    ) : UserAccount{s_AccountType_, s_AccountStatus_, s_Email_, s_Login_, s_Password_, "0"}
    , i_AdminId{i_AdminId_}
{
    std::cout << "Admin account created" << std::endl;
}

AdminAccount::~AdminAccount()
{
    logAction("Admin account with ID " + std::to_string(i_AdminId) + " deleted");
    std::cout << "Admin account destructor" << std::endl;
}

void AdminAccount::displayLog() const
{
    if (!isLoggedIn()) return;

    std::cout << "History of changes made by the admin:" << std::endl;
    for (const auto& entry : s_log)
    {
        std::cout << entry << std::endl;
    }
}

void AdminAccount::blockAccount(UserAccount& user)
{
    if (!isLoggedIn()) return;

    user.s_AccountStatus = "blocked";
    auto addToLog = "Blocked account of user with login: " + user.s_Login;
    logAction(addToLog);
}

void AdminAccount::unblockAccount(UserAccount& user)
{
    if (!isLoggedIn()) return;

    user.s_AccountStatus = "active";
    auto addToLog = "Unblocked account of user with login: " + user.s_Login;
    logAction(addToLog);
}

void AdminAccount::generateUserReport(const UserAccount& user) const
{
    if (!isLoggedIn()) return;

    std::cout << "--User Report--" << std::endl;
    std::cout << "Login: " << user.s_Login << std::endl;
    std::cout << "Email: " << user.s_Email << std::endl;
    std::cout << "Account type: " << user.s_AccountType << std::endl;
    std::cout << "Account status: " << user.s_AccountStatus << std::endl;
    std::cout << "Balance: " << user.i_AccountBalance << std::endl;
}

void AdminAccount::setAccountType(UserAccount& user, const std::string& s_nType, const std::string& s_password)
{
    if (authorize(s_password))
    {
        user.s_AccountType = s_nType;
        auto addToLog = "Admin changed account type of user to: " + s_nType;
        logAction(addToLog);
    }
    else
    {
        std::cout << "Unauthorized attempt to change account type." << std::endl;
    }
}

int AdminAccount::getAdminID() const
{
    return i_AdminId;
}

bool AdminAccount::authorize(const std::string& s_Password_) const
{
    return s_Password_ == s_Password && isLoggedIn();
}

void AdminAccount::logAction(const std::string& action)
{
    auto formattedAction = "[AdminLog] " + action;
    s_log.push_back(formattedAction);
}
