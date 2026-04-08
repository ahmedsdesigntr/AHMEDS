#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

struct Transaction {
    string type;
    double amount;
    double balanceAfter;
};

struct Account {
    int accountNumber;
    string name;
    string pin;
    double balance;
    vector<Transaction> history;
};

vector<Account> accounts;
int nextAccountNumber = 1001;

int findAccount(int accNum) {
    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i].accountNumber == accNum)
            return i;
    }
    return -1;
}

void createAccount() {
    Account acc;
    acc.accountNumber = nextAccountNumber++;
    cout << "\nEnter your name: ";
    cin.ignore();
    getline(cin, acc.name);
    cout << "Set a 4-digit PIN: ";
    cin >> acc.pin;
    cout << "Enter initial deposit: $";
    cin >> acc.balance;

    if (acc.balance < 0) {
        cout << "Invalid deposit amount.\n";
        return;
    }

    acc.history.push_back({"Deposit", acc.balance, acc.balance});
    accounts.push_back(acc);
    cout << "\nAccount created successfully!\n";
    cout << "Your account number is: " << acc.accountNumber << "\n";
}

bool authenticate(int index) {
    string pin;
    cout << "Enter PIN: ";
    cin >> pin;
    if (accounts[index].pin != pin) {
        cout << "Incorrect PIN.\n";
        return false;
    }
    return true;
}

void deposit(int index) {
    double amount;
    cout << "Enter deposit amount: $";
    cin >> amount;
    if (amount <= 0) {
        cout << "Invalid amount.\n";
        return;
    }
    accounts[index].balance += amount;
    accounts[index].history.push_back({"Deposit", amount, accounts[index].balance});
    cout << "Deposited $" << fixed << setprecision(2) << amount << "\n";
    cout << "New balance: $" << accounts[index].balance << "\n";
}

void withdraw(int index) {
    double amount;
    cout << "Enter withdrawal amount: $";
    cin >> amount;
    if (amount <= 0) {
        cout << "Invalid amount.\n";
        return;
    }
    if (amount > accounts[index].balance) {
        cout << "Insufficient funds.\n";
        return;
    }
    accounts[index].balance -= amount;
    accounts[index].history.push_back({"Withdrawal", amount, accounts[index].balance});
    cout << "Withdrew $" << fixed << setprecision(2) << amount << "\n";
    cout << "New balance: $" << accounts[index].balance << "\n";
}

void transfer(int fromIndex) {
    int toAccNum;
    cout << "Enter recipient account number: ";
    cin >> toAccNum;
    int toIndex = findAccount(toAccNum);
    if (toIndex == -1) {
        cout << "Recipient account not found.\n";
        return;
    }
    if (toIndex == fromIndex) {
        cout << "Cannot transfer to the same account.\n";
        return;
    }

    double amount;
    cout << "Enter transfer amount: $";
    cin >> amount;
    if (amount <= 0) {
        cout << "Invalid amount.\n";
        return;
    }
    if (amount > accounts[fromIndex].balance) {
        cout << "Insufficient funds.\n";
        return;
    }

    accounts[fromIndex].balance -= amount;
    accounts[toIndex].balance += amount;
    accounts[fromIndex].history.push_back({"Transfer Out", amount, accounts[fromIndex].balance});
    accounts[toIndex].history.push_back({"Transfer In", amount, accounts[toIndex].balance});

    cout << "Transferred $" << fixed << setprecision(2) << amount
         << " to account " << toAccNum << "\n";
    cout << "Your new balance: $" << accounts[fromIndex].balance << "\n";
}

void checkBalance(int index) {
    cout << "\nAccount: " << accounts[index].accountNumber << "\n";
    cout << "Name: " << accounts[index].name << "\n";
    cout << "Balance: $" << fixed << setprecision(2) << accounts[index].balance << "\n";
}

void showHistory(int index) {
    cout << "\n--- Transaction History ---\n";
    if (accounts[index].history.empty()) {
        cout << "No transactions yet.\n";
        return;
    }
    cout << left << setw(15) << "Type" << setw(12) << "Amount" << "Balance\n";
    cout << string(39, '-') << "\n";
    for (auto& t : accounts[index].history) {
        cout << left << setw(15) << t.type
             << "$" << setw(11) << fixed << setprecision(2) << t.amount
             << "$" << t.balanceAfter << "\n";
    }
}

void accountMenu(int index) {
    int choice;
    do {
        cout << "\n===== Account Menu =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Transfer\n";
        cout << "5. Transaction History\n";
        cout << "6. Logout\n";
        cout << "Choose: ";
        cin >> choice;

        switch (choice) {
            case 1: checkBalance(index); break;
            case 2: deposit(index); break;
            case 3: withdraw(index); break;
            case 4: transfer(index); break;
            case 5: showHistory(index); break;
            case 6: cout << "Logged out.\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 6);
}

void login() {
    int accNum;
    cout << "Enter account number: ";
    cin >> accNum;
    int index = findAccount(accNum);
    if (index == -1) {
        cout << "Account not found.\n";
        return;
    }
    if (authenticate(index))
        accountMenu(index);
}

int main() {
    int choice;
    cout << "================================\n";
    cout << "   Welcome to Ahmed's Bank\n";
    cout << "================================\n";

    do {
        cout << "\n===== Main Menu =====\n";
        cout << "1. Create Account\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        switch (choice) {
            case 1: createAccount(); break;
            case 2: login(); break;
            case 3: cout << "Thank you for using Ahmed's Bank!\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 3);

    return 0;
}
