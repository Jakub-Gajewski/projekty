#ifndef ADMINACCOUNT_H
#define ADMINACCOUNT_H

#include "userAccount.h"
#include <vector>

class AdminAccount : public UserAccount {
public:
    AdminAccount(
        const std::string& sAccountType_
        ,const std::string& sAccountStatus_
        ,const std::string& sEmail_
        ,const std::string& sLogin_
        ,const std::string& sPassword_
        ,const int iAdminId_
        );

    ~AdminAccount();

    void displayLog() const;

    void blockAccount(UserAccount& user);

    void unblockAccount(UserAccount& user);

    void generateUserReport(const UserAccount& user) const;

    void setAccountType(UserAccount& user, const std::string& nType, const std::string& password);

    int getAdminID() const;

private:
    bool authorize(const std::string& sPassword_) const;

    void logAction(const std::string& action);

private:
    int iAdminId;
    std::vector<std::string> log;
};

#endif // ADMINACCOUNT_H
