#ifndef ADMINACCOUNT_H
#define ADMINACCOUNT_H

#include "userAccount.h"
#include <vector>

class AdminAccount : public UserAccount {

public:
    AdminAccount(
        std::string sAccountType_,
        std::string sAccountStatus_,
        std::string sEmail_,
        std::string sLogin_,
        std::string sPassword_,
        int iAdminId_);

    ~AdminAccount();

    void displayLog() const;

    void logAction(const std::string& action);

    void change_account_status(const std::string& nStatus);

    void change_account_type(const std::string& nType);

    void blockAccount(UserAccount& user);

    void unblockAccount(UserAccount& user);

    void generateUserReport(const UserAccount& user) const;

    void secureChangeAccountType(UserAccount& user, const std::string& n_type, const std::string& password);

    int getAdminID() const;

private:
    bool authorize(const std::string& sPassword_) const;

private:
    int iAdminId;
    std::vector<std::string> log;
};

#endif // ADMINACCOUNT_H
