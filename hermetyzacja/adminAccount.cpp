#include "adminAccount.h"
#include <iostream>

AdminAccount::AdminAccount(
    const std::string& sAccountType_,
    const std::string& sAccountStatus_,
    const std::string& sEmail_,
    const std::string& sLogin_,
    const std::string& sPassword_,
    const int iAdminId_
    ) : UserAccount(sAccountType_, sAccountStatus_, sEmail_, sLogin_, sPassword_),
    iAdminId(iAdminId_)
{
    std::cout << "Utworzono konto admina" << std::endl;
}

AdminAccount::~AdminAccount()
{
    logAction("Usunięto konto admina o ID: " + std::to_string(iAdminId));
    std::cout << "Destruktor konta admina" << std::endl;
}

void AdminAccount::displayLog() const
{
    std::cout << "Historia zmian dokonanych przez admina:" << std::endl;
    for (const auto& entry : log)
    {
        std::cout << entry << std::endl;
    }
}

void AdminAccount::logAction(const std::string& action)
{
    log.push_back(action);
}

void AdminAccount::changeAccountStatus(const std::string& nStatus)
{
    sAccountStatus = nStatus;
    logAction("Zmieniono status konta na: " + nStatus);
}

void AdminAccount::changeAccountType(const std::string& nType)
{
    sAccountType = nType;
    logAction("Zmieniono typ konta na: " + nType);
}

void AdminAccount::blockAccount(UserAccount& user) {
    user.sAccountStatus = "zablokowany";
    logAction("Zablokowano konto użytkownika o loginie: " + user.sLogin);
}

void AdminAccount::unblockAccount(UserAccount& user) {
    user.sAccountStatus = "aktywny";
    logAction("Odblokowano konto użytkownika o loginie: " + user.sLogin);
}

void AdminAccount::generateUserReport(const UserAccount& user) const {
    std::cout << "Raport o użytkowniku:" << std::endl;
    std::cout << "Login: " << user.sLogin << std::endl;
    std::cout << "Email: " << user.sEmail << std::endl;
    std::cout << "Typ konta: " << user.getAccType() << std::endl;
    std::cout << "Status konta: " << user.getAccStatus() << std::endl;
    std::cout << "Saldo: " << user.getBalance() << std::endl;
}

void AdminAccount::secureChangeAccountType(UserAccount& user, const std::string& nType, const std::string& password) {
    if (authorize(password)) {
        user.sAccountType = ntype;
        logAction("Admin zmienił typ konta użytkownika na: " + nType);
    } else {
        cout << "Nieautoryzowana próba zmiany typu konta." << endl;
    }
}

int AdminAccount::getAdminID() const {
    return iAdminId;
}

bool AdminAccount::authorize(const std::string& sPassword_) const {
    return sPassword_ == sPassword;
}
