#include <iostream>
#include <string>
#include "userAccount.h"

using namespace std;

class Admin_account : public User_account {
    private:
        int admin_id;
    public:
        Admin_account(string account_type_, string account_status_, string email_, string login_, string password_, int account_balance_, int admin_id_, string account_number_)
            : User_account(account_type_, account_status_, email_, login_, password_, account_balance_, account_number_),
            admin_id(admin_id_)
        {
            cout << "Utworzono konto admina" << endl;
        }

        void change_account_status(string n_status) {
            account_status = n_status;
        }

        void change_account_type(string n_type) {
            account_type = n_type;
        }

        ~Admin_account() {
            cout << "Destruktor konta admina" << endl;
        }
};

int main() {
    Admin_account adm1("admin", "aktywny", "d@d", "adm1n", "admin76", 0, 675473, "01234567890012345678900123");
    User_account usr1("osobiste", "aktywny", "k@k", "us9r", "123456789", 1564, "01234567890012345678900123");

    adm1.change_account_status("Nie aktywny");

    cout << "Typ konta to: " << usr1.return_acc_type() << endl;
    usr1.contribute_money("123456789", 100);
    usr1.check_balance("123456789");

    return 0;
}
