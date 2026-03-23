#include<iostream>
#include<string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:

    
    BankAccount() {
        accountNumber = 0;
        accountHolderName = "Unknown";
        balance = 0.0;
    }

    
    BankAccount(int accNum, string accHolder, double initialBalance) {
        accountNumber = accNum;
        accountHolderName = accHolder;
        balance = initialBalance;
        if (balance < 0) {
            balance = 0.0;

        }
    if (accountNumber < 1000) {
            accountNumber = 1000;
        }
    }
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if(amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient funds!" << endl;
    }

    void displayAccountInfo() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {

    BankAccount account1;

    BankAccount account2(1907, "AHMED", 1000);

    
    int acNum;
    string name;
    double balance;

    cout << "Enter Account Number: ";
    cin >> acNum;

    cout << "Enter Account Holder Name: ";
    cin >> name;

    cout << "Enter Initial Balance: ";
    cin >> balance;

    BankAccount account3(acNum, name, balance);

    
    cout << " Account 1";
    account1.displayAccountInfo();

    cout << " Account 2";
    account2.displayAccountInfo();

    cout << " Account 3";
    account3.displayAccountInfo();

    return 0;
}