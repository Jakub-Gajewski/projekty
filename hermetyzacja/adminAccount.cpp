#include "adminAccount.h"

AdminAccount::AdminAccount(
    const std::string& sAccountType_
    ,const std::string& sAccountStatus_
    ,const std::string& sEmail_
    ,const std::string& sLogin_
    ,const std::string& sPassword_
    ,const int iAdminId_
    ) : UserAccount{sAccountType_, sAccountStatus_, sEmail_, sLogin_, sPassword_, "0"}
    ,iAdminId{iAdminId_}
{
    std::cout << "Utworzono konto admina" << std::endl;
}

AdminAccount::~AdminAccount()
{
    logAction("Usunieto konto admina o ID: " + std::to_string(iAdminId));
    std::cout << "Destruktor konta admina" << std::endl;
}

void AdminAccount::displayLog() const
{
    if (!isLoggedIn()) return;

    std::cout << "Historia zmian dokonanych przez admina:" << std::endl;
    for (const auto& entry : log)
    {
        std::cout << entry << std::endl;
    }
}

void AdminAccount::blockAccount(UserAccount& user)
{
    if (!isLoggedIn()) return;

    user.sAccountStatus = "zablokowane";
    auto addToLog{"Zablokowano konto uzytkownika o loginie: " + user.sLogin};
    logAction(addToLog);
}

void AdminAccount::unblockAccount(UserAccount& user)
{
    if (!isLoggedIn()) return;

    user.sAccountStatus = "aktywne";
    auto addToLog{"Odblokowano konto uzytkownika o loginie: " + user.sLogin};
    logAction(addToLog);
}


void AdminAccount::generateUserReport(const UserAccount& user) const
{
    if (!isLoggedIn()) return;

    std::cout << "--Raport o uzytkowniku--" << std::endl;
    std::cout << "Login: " << user.sLogin << std::endl;
    std::cout << "Email: " << user.sEmail << std::endl;
    std::cout << "Typ konta: " << user.sAccountType << std::endl;
    std::cout << "Status konta: " << user.sAccountStatus << std::endl;
    std::cout << "Saldo: " << user.iAccountBalance << std::endl;
}

void AdminAccount::setAccountType(UserAccount& user, const std::string& nType, const std::string& password)
{
    if (authorize(password))
    {
        user.sAccountType = nType;
        auto addToLog = "Admin zmienil typ konta uzytkownika na: " + nType;
        logAction(addToLog);
    }
    else
    {
        std::cout << "Nieautoryzowana proba zmiany typu konta." << std::endl;
    }
}

int AdminAccount::getAdminID() const
{
    return iAdminId;
}

bool AdminAccount::authorize(const std::string& sPassword_) const
{
    return sPassword_ == sPassword && isLoggedIn();
}

void AdminAccount::logAction(const std::string& action)
{
    auto formattedAction{"[AdminLog] " + action};
    log.push_back(formattedAction);
}

