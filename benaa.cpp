#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(int accNo, string holderName, double initialBalance) {
        accountNumber = accNo;
        accountHolder = holderName;
        balance = initialBalance;
    }


    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "\nDeposit: " << amount << endl;
            cout << "New Balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "\nWithdrawal: " << amount << endl;
            cout << "New Balance: " << balance << endl;
        } else {
            cout << "Insufficient funds or invalid amount!" << endl;
        }
    }

    void displayAccount() {
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }

}; 


int main() {

    BankAccount account1(101, "John", 5000);
    BankAccount account2(102, "Mary", 3000);

    // Display initial details
    cout << "Initial Account Details:" << endl;
    account1.displayAccount();
    account2.displayAccount();

    account1.deposit(1000);
    account1.withdraw(2000);

    cout << "\nUpdated Account Details:" << endl;
    account1.displayAccount();

    return 0;
}