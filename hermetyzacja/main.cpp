#include <iostream>
#include "userAccount.h"
#include "adminAccount.h"

int main() {
    // Tworzenie konta admina i użytkownika
    AdminAccount adm1("admin", "aktywny", "admin@example.com", "admin123", "admin76", 1);
    UserAccount usr1("osobiste", "aktywny", "user@example.com", "user123", "userpass", "12345678901234567890");

    // Logowanie użytkownika
    std::cout << "\n=== Logowanie użytkownika ===" << std::endl;
    usr1.logIn("user123", "userpass");

    // Sprawdzenie balansu przed wpłatą
    std::cout << "\nStan konta użytkownika przed wpłatą: " << usr1.getBalance() << " PLN" << std::endl;

    // Użytkownik wpłaca pieniądze
    usr1.contributeMoney(200);
    std::cout << "Stan konta po wpłacie: " << usr1.getBalance() << " PLN" << std::endl;

    // Użytkownik wypłaca pieniądze
    usr1.withdrawMoney(50);
    std::cout << "Stan konta po wypłacie: " << usr1.getBalance() << " PLN" << std::endl;

    // Zmiana e-maila użytkownika
    std::cout << "\n=== Użytkownik zmienia e-mail ===" << std::endl;
    usr1.changeEmail("new_user@example.com");

    // Zablokowanie konta użytkownika przez admina
    std::cout << "\n=== Admin blokuje konto użytkownika ===" << std::endl;
    adm1.blockAccount(usr1);
    std::cout << "Status konta użytkownika: " << usr1.getAccStatus() << std::endl;

    // Próba logowania zablokowanego użytkownika
    std::cout << "\n=== Próba logowania zablokowanego użytkownika ===" << std::endl;
    usr1.logIn("user123", "userpass");

    // Admin odblokowuje konto użytkownika
    std::cout << "\n=== Admin odblokowuje konto użytkownika ===" << std::endl;
    adm1.unblockAccount(usr1);
    std::cout << "Status konta użytkownika: " << usr1.getAccStatus() << std::endl;

    // Wygenerowanie raportu o użytkowniku przez admina
    std::cout << "\n=== Admin generuje raport o użytkowniku ===" << std::endl;
    adm1.generateUserReport(usr1);

    // Wyświetlenie logu admina
    std::cout << "\n=== Historia działań admina ===" << std::endl;
    adm1.displayLog();

    return 0;
}
