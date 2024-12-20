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
    iAdminId(iAdminId_) {
    std::cout << "Utworzono konto admina" << std::endl;
}

AdminAccount::~AdminAccount() {
    logAction("Usunięto konto admina o ID: " + std::to_string(iAdminId));
    std::cout << "Destruktor konta admina" << std::endl;
}

void AdminAccount::displayLog() const {
    if (!isLoggedIn()) return;

    std::cout << "Historia zmian dokonanych przez admina:" << std::endl;
    for (const auto& entry : log) {
        std::cout << entry << std::endl;
    }
}

void AdminAccount::changeAccountStatus(const std::string& nStatus) {
    if (!isLoggedIn()) return;

    sAccountStatus = nStatus;
    logAction("Zmieniono status konta na: " + nStatus);
}

void AdminAccount::changeAccountType(const std::string& nType) {
    if (!isLoggedIn()) return;

    sAccountType = nType;
    logAction("Zmieniono typ konta na: " + nType);
}

void AdminAccount::blockAccount(UserAccount& user) {
    if (!isLoggedIn()) return;

    user.setAccountStatus("zablokowane", *this);  // Używamy metody z UserAccount, żeby zmienić status konta
    logAction("Zablokowano konto użytkownika o loginie: " + user.getLogin());
}

void AdminAccount::unblockAccount(UserAccount& user) {
    if (!isLoggedIn()) return;

    user.setAccountStatus("aktywny", *this);  // Używamy metody z UserAccount, żeby zmienić status konta
    logAction("Odblokowano konto użytkownika o loginie: " + user.getLogin());
}

void AdminAccount::generateUserReport(const UserAccount& user) const {
    if (!isLoggedIn()) return;

    std::cout << "Raport o użytkowniku:" << std::endl;
    std::cout << "Login: " << user.getLogin() << std::endl;
    std::cout << "Email: " << user.getEmail() << std::endl;
    std::cout << "Typ konta: " << user.getAccType() << std::endl;
    std::cout << "Status konta: " << user.getAccStatus() << std::endl;
    std::cout << "Saldo: " << user.getBalance() << std::endl;
}

void AdminAccount::secureChangeAccountType(UserAccount& user, const std::string& nType, const std::string& password) {
    if (authorize(password)) {
        user.setAccountType(nType, *this);  // Używamy metody z UserAccount, żeby zmienić typ konta
        logAction("Admin zmienił typ konta użytkownika na: " + nType);
    } else {
        std::cout << "Nieautoryzowana próba zmiany typu konta." << std::endl;
    }
}

int AdminAccount::getAdminID() const {
    return iAdminId;
}

bool AdminAccount::authorize(const std::string& sPassword_) const {
    return sPassword_ == sPassword && isLoggedIn();
}

void AdminAccount::logAction(const std::string& action) {
    log.push_back(action);
}
