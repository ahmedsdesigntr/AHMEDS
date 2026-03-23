#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

// bank account management system

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:

    BankAccount (){
        accountNumber = 0;
        accountHolderName = "";
        balance = 0.0;
    }

    BankAccount(int accNum, string accHolder, double initialBalance);

    void deposit(double amount);
    void withdraw(double amount);
    double getBalance() const;
    int getAccountNumber() const;
    string getAccountHolderName() const;

    void displayAccountInfo() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

BankAccount::BankAccount(int acNum, string acHolder, double iBalance) {
    accountNumber = acNum;
    accountHolderName = acHolder;
    balance = iBalance;
}

void BankAccount::deposit(double amount) {
    balance += amount;
}

void BankAccount::withdraw(double amount) {
    if (amount <= balance)
        balance -= amount;
    else
        cout << "Insufficient funds." << endl;
}

double BankAccount::getBalance() const {
    return balance;
}

int BankAccount::getAccountNumber() const {
    return accountNumber;
}

string BankAccount::getAccountHolderName() const {
    return accountHolderName;
}

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

    cout << "\nAccount 1\n";
    account1.displayAccountInfo();

    cout << "\nAccount 2\n";
    account2.displayAccountInfo();

    cout << "\nAccount 3\n";
    account3.displayAccountInfo();

    return 0;
}