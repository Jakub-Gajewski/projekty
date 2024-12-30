#include "adminAccount.h"
#include "userAccount.h"
#include <iostream>

int main() {
    AdminAccount admin{"admin", "active", "admin@example.com", "admin123", "admin76", 1};
    UserAccount user{"personal", "active", "user@example.com", "user123", "userpass", "12345678901234567890"};

    std::cout << "\n=== User and Admin Login ===" << std::endl;
    user.logIn("user123", "userpass");
    admin.logIn("admin123", "admin76");

    std::cout << "\n=== User Account Operations ===" << std::endl;
    std::cout << "User account balance before deposit: " << user.getBalance() << " PLN" << std::endl;

    user.contributeMoney(200);
    std::cout << "Account balance after deposit: " << user.getBalance() << " PLN" << std::endl;

    user.withdrawMoney(50);
    std::cout << "Account balance after withdrawal: " << user.getBalance() << " PLN" << std::endl;

    std::cout << "\n=== User Changes Email ===" << std::endl;
    user.changeEmail("new_user@example.com");

    std::cout << "\n=== User Logout ===" << std::endl;
    user.logOut();

    std::cout << "\n=== Admin Blocks User Account ===" << std::endl;
    admin.blockAccount(user);

    std::cout << "\n=== Attempt to Log In with Blocked User Account ===" << std::endl;
    user.logIn("user123", "userpass");

    std::cout << "\n=== Admin Unblocks User Account ===" << std::endl;
    admin.unblockAccount(user);

    std::cout << "\n=== Attempt to Log In with Unblocked User Account ===" << std::endl;
    user.logIn("user123", "userpass");

    std::cout << "\n=== Admin Generates User Report ===" << std::endl;
    admin.generateUserReport(user);

    std::cout << "\n=== Admin Action History ===" << std::endl;
    admin.displayLog();

    std::cout << "\n=== User and Admin Logout ===" << std::endl;
    user.logOut();
    admin.logOut();


    return 0;
}
