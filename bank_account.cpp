#include <iostream>
using namespace std;

class BankAccount {
    string name;
    int accNo;
    string type;
    float balance;

public:
    void setData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter account number: ";
        cin >> accNo;
        cout << "Enter account type: ";
        cin >> type;
        cout << "Enter balance: ";
        cin >> balance;
    }

    void deposit() {
        float amt;
        cout << "Enter amount to deposit: ";
        cin >> amt;
        balance = balance + amt;
        cout << "Money deposited\n";
    }

    void withdraw() {
        float amt;
        cout << "Enter amount to withdraw: ";
        cin >> amt;

        if (amt <= balance) {
            balance = balance - amt;
            cout << "Money withdrawn\n";
        } else {
            cout << "Not enough balance\n";
        }
    }

    void showData() {
        cout << "\nDetails:\n";
        cout << "Name: " << name << endl;
        cout << "Account No: " << accNo << endl;
        cout << "Type: " << type << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b;
    int ch;

    b.setData();

    do {
        cout << "\n1.Deposit 2.Withdraw 3.Display 4.Exit\n";
        cout << "Enter choice: ";
        cin >> ch;

        if (ch == 1) {
            b.deposit();
        } else if (ch == 2) {
            b.withdraw();
        } else if (ch == 3) {
            b.showData();
        }

    } while (ch != 4);

    return 0;
}