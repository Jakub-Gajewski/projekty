#include "adminAccount.h"
#include "userAccount.h"

int main() {
    AdminAccount adm1("admin", "aktywny", "admin@example.com", "admin123", "admin76", 1);
    UserAccount usr1("osobiste", "aktywny", "user@example.com", "user123", "userpass", "12345678901234567890");

    std::cout << "\n=== Logowanie uzytkownika i admina ===" << std::endl;
    usr1.logIn("user123", "userpass");
    adm1.logIn("admin123", "admin76");

    std::cout << "\n=== Operacje na koncie uzytkownika ===" << std::endl;
    std::cout << "Stan konta uzytkownika przed wplata: " << usr1.getBalance() << " PLN" << std::endl;

    usr1.contributeMoney(200);
    std::cout << "Stan konta po wplacie: " << usr1.getBalance() << " PLN" << std::endl;

    usr1.withdrawMoney(50);
    std::cout << "Stan konta po wyplacie: " << usr1.getBalance() << " PLN" << std::endl;

    std::cout << "\n=== Uzytkownik zmienia e-mail ===" << std::endl;
    usr1.changeEmail("new_user@example.com");

    std::cout << "\n=== Wylogowanie uzytkownika ===" << std::endl;
    usr1.logOut();

    std::cout << "\n=== Admin blokuje konto uzytkownika ===" << std::endl;
    adm1.blockAccount(usr1);

    std::cout << "\n=== Proba logowania zablokowanego uzytkownika ===" << std::endl;
    usr1.logIn("user123", "userpass");

    std::cout << "\n=== Admin odblokowuje konto uzytkownika ===" << std::endl;
    adm1.unblockAccount(usr1);

    std::cout << "\n=== Proba logowania odblokowanego uzytkownika ===" << std::endl;
    usr1.logIn("user123", "userpass");

    std::cout << "\n=== Admin generuje raport o uzytkowniku ===" << std::endl;
    adm1.generateUserReport(usr1);

    std::cout << "\n=== Historia dzialan admina ===" << std::endl;
    adm1.displayLog();

    std::cout << "\n=== Wylogowanie uzytkownika i admina ===" << std::endl;
    usr1.logOut();
    adm1.logOut();

    return 0;
}
