#include <iostream>
using namespace std;

class Account {
private:
    int balance; 
public:
    Account(int initialBalance) {
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
            cout << "Error: Initial balance was invalid. Setting balance to 0." << endl;
        }
    }
    void credit(int amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Added " << amount << " to the balance." << endl;
        } else {
            cout << "Error: Credit amount must be positive." << endl;
        }
    }
    void debit(int amount) {
        if (amount > balance) {
            cout << "Debit amount exceeded account balance." << endl;
        } else if (amount > 0) {
            balance -= amount;
            cout << "Withdrew " << amount << " from the balance." << endl;
        } else {
            cout << "Error: Debit amount must be positive." << endl;
        }
    }
    int getBalance() const {
        return balance;
    }
};
int main() {
    Account account1(100); // Initial balance amount
    Account account2(-50); // Should be 0

    cout << "Initial balance of account1: " << account1.getBalance() << endl;
    account1.credit(50);
    cout << "Balance after crediting 50: " << account1.getBalance() << endl;
    account1.debit(30);
    cout << "Balance after debiting 30: " << account1.getBalance() << endl;
    account1.debit(150); 
    cout << "Final balance of account1: " << account1.getBalance() << endl;

    cout << "Initial balance of account2: " << account2.getBalance() << endl;
    account2.credit(20);
    cout << "Balance after crediting 20: " << account2.getBalance() << endl;
    account2.debit(10);
    cout << "Balance after debiting 10: " << account2.getBalance() << endl;

    return 0;
}

