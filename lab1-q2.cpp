#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    char gender;
    int age;

    cout<<"enter your name: " ;
    cin>>name;
    
    cout<<"enter your gender: " ;
    cin>>gender;

    cout<<"enter your age: " ;
    cin>>age;

    cout << "Hello i am , " << name << endl ;
    cout << "your gender is " << gender << endl ;
    cout << "I am " << age << " years old." << endl  ;

    return 0;

}