#include <iostream>
#include <string>
using namespace std;
class bankaccount
{
    private:
    string acountholderismi;
    double balance;
    public:
    static int totalaccounts;
    bankaccount(string n,double b)
    {
        acountholderismi=n;
        balance=b;
        totalaccounts++;
    }
    bankaccount()
    {
        acountholderismi="";
        balance=0;
        totalaccounts++;
    }
    void displaybankaccount()
    {
        cout<<"Account Holder Name: "<<acountholderismi<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
    static void showTotalAccounts()
    {
        cout << "Total Accounts: " << totalaccounts << endl;
    }

    bankaccount operator+(const bankaccount& other) const
    {
        return bankaccount(acountholderismi + " ve " + other.acountholderismi,balance + other.balance);
    }
};
int bankaccount::totalaccounts=0;

int main()
{
    bankaccount a("ahmed",500);
    a.displaybankaccount();
    cout<<endl;
    bankaccount s("asli",300);
    s.displaybankaccount();
    cout<<endl;

    bankaccount c = a + s;
    cout << "total hesaplardaki para :" << endl;
    c.displaybankaccount();
    cout << endl;

    bankaccount::showTotalAccounts();
    return 0;
}