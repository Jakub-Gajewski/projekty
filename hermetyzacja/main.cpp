#include <iostream>
#include <string>
#include "userAccount.h"
#include "adminAccount.h"

using namespace std;

int main() {
    AdminAccount adm1("admin", "aktywny", "d@d", "adm1n", "admin76", 0, 675473, "01234567890012345678900123");
    UserAccount usr1("osobiste", "aktywny", "k@k", "us9r", "123456789", 1564, "01234567890012345678900123");

    adm1.change_account_status("Nie aktywny");

    cout << "Typ konta to: " << usr1.return_acc_type() << endl;
    usr1.contribute_money("123456789", 100);
    usr1.check_balance("123456789");

    return 0;
}
