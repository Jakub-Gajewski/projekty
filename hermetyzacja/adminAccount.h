#ifndef ADMINACCOUNT_H
#define ADMINACCOUNT_H

#include "userAccount.h"
#include <string>
#include <vector>

class AdminAccount : public UserAccount {
public:
    AdminAccount(
        const std::string& s_AccountType_
        ,const std::string& s_AccountStatus_
        ,const std::string& s_Email_
        ,const std::string& s_Login_
        ,const std::string& s_Password_
        ,const int i_AdminId_
        );

    ~AdminAccount();

    void displayLog() const;

    void blockAccount(UserAccount& user);

    void unblockAccount(UserAccount& user);

    void generateUserReport(const UserAccount& user) const;

    void setAccountType(UserAccount& user, const std::string& s_nType, const std::string& s_password);

    int getAdminID() const;

private:
    bool authorize(const std::string& s_Password_) const;

    void logAction(const std::string& s_action);

private:
    int i_AdminId;
    std::vector<std::string> s_log;
};

#endif // ADMINACCOUNT_H
