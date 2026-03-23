#include <iostream>
using namespace std;

void calculateSum(int num1 ,int num2)
{
    int sum= num1+ num2;
    cout<<"the sum is " << sum << endl ;
    
}
int calculateDiff(int num1 ,int num2)
{
    if(num1>num2)
    {
        return num1-num2;
    }
    return num2 - num1;

}
int main()
{
    int num1,num2;
    cout<<"enter a number: " ;
    cin>>num1;
    cout<<"enter another number: " ;
    cin>>num2;

    calculateSum(num1,num2);
    int diff = calculateDiff(num1,num2);
    cout<<"the difference is " << diff << endl ;


    return 0;
}