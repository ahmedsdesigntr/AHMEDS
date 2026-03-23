#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

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

    BankAccount(int acNum, string acHolder, double aBalance);

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

BankAccount::BankAccount(int acNum, string acHolder, double aBalance) {

    if (aBalance < 0.0)
        balance = 0.0;
    else
        balance = aBalance;

    if (acNum < 1000)
        accountNumber = 1000;
    else
        accountNumber = acNum;

    accountHolderName = acHolder;
}

void BankAccount::deposit(double amount) {

    if (amount < 0.0) {
        cout << "Invalid deposit amount." << endl;
    } else {
        balance += amount;
    }
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

    int acNum1;
    string name1;
    double balance1;
    double depositamount1;

    cout << "Enter Account Number: ";
    cin >> acNum1;

    cout << "Enter Account Holder Name: ";
    cin >> name1;

    cout << "Enter Initial Balance: ";
    cin >> balance1;

    BankAccount account2(acNum1, name1, balance1);

    cout << "Enter deposit amount: ";
    cin >> depositamount1;
    account2.deposit(depositamount1);
    

    int acNum;
    string name;
    double balance;
    double withdrawaamount;

    cout << "Enter Account Number: ";
    cin >> acNum;

    cout << "Enter Account Holder Name: ";
    cin >> name;

    cout << "Enter Initial Balance: ";
    cin >> balance;

    BankAccount account3(acNum, name, balance);

    cout << "Enter withdrawal amount: ";
    cin >> withdrawaamount;

    account3.withdraw(withdrawaamount);

    cout << "\ndefultAccount 1\n";
    account1.displayAccountInfo();
    cout << "-------------------------";

    cout << "\nprametredAccount 2\n";
    account2.displayAccountInfo();
    cout << "-------------------------";

    cout << "\nuserAccount 3\n";
    account3.displayAccountInfo();
    cout << "-------------------------";

    return 0;
}