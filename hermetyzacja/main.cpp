#include <iostream>
#include <string>

using namespace std;

class User_account {
    private:
        int account_balance = 0;
        string email;
        string login;
        string password;
        string account_number = 0;

    protected:
        string account_type = "osobiste";
        string account_status = "aktywny";

    public:
        User_account(string account_type_, string account_status_, string email_, string login_, string password_, int account_balance_, string account_number_)
            : account_type(account_type_),
            account_status(account_status_),
            email(email_),
            login(login_),
            password(password_),
            account_balance(account_balance_),
            account_number(account_number_)
        {
            cout << "Utworzono konto uzytkownika" << endl;
        }

        void change_password(string o_pass, string n_pass) {
            if (o_pass == password) {
                password = n_pass;
                cout << "Zmieniono haslo" << endl;
            } else {
                cout << "Nieprawidlowe stare haslo" << endl;
            }
        }

        void contribute_money(string password_, int quantity_) {
            if (password_ == password && quantity_ > 0) {
                account_balance += quantity_;
                cout << "Zmieniono stan konta" << endl;
            } else {
                cout << "Nieprawidlowe haslo lub kwota wplaty jest rowna/mniejsza od 0" << endl;
            }
        }

        void withdraw_money(string password_, int quantity_) {
            if (password_ == password && quantity_ > 0 && account_balance >= quantity_) {
                account_balance -= quantity_;
                cout << "Zmieniono stan konta" << endl;
            } else {
                cout << "Nieprawidlowe haslo lub brak srodkow na koncie" << endl;
            }
        }

        void check_balance(string password_) {
            if (password_ == password) {
                cout << "Stan konta wynosi " << account_balance << " zl" << endl;
            } else {
                cout << "Nieprawidlowe haslo" << endl;
            }
        }

        string return_acc_type() {
            return account_type;
        }

        string return_acc_status() {
            return account_status;
        }

        ~User_account() {
            cout << "Destruktor konta uzytkownika" << endl;
        }
};

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
