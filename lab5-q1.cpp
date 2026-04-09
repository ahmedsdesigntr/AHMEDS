#include <iostream>
#include <string>
using namespace std;
class person 
{
    private:
    string name;
    int age;
    public:
    person(string n,int a)
    {
        name=n;
        age=a;
    }
    void displayperson()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class student:public person
{
    int id;
    int grade;
    public:
    student(string n,int a,int i,int g):person(n,a)
    {
        id=i;
        grade=g;
    }
    void displaystudent()
    {
        cout<<"Id: "<<id<<endl;
        cout<<"Grade: "<<grade<<endl;
    }
};
class gradutestudent:public student
{
    string bolum;
    public:
    gradutestudent(string n,int a,int i,int g,string t):student(n,a,i,g)
    {
        bolum=t;
    }
    void displaygradutestudentthathegraduated()
    {
        cout<<"Bolum: "<<bolum<<endl;
    }
};
int main()
{
//kendim eklemek istedim asli hocam 
    person p("ahmed",19);
    p.displayperson();
    cout<<endl;
//burayida kendim eklemek istedim asli hocam 
    student s("watfe",20,123,90);
    s.displayperson();
    s.displaystudent();
    cout<<endl;
//burasi istenen kisimlar heralde 
    gradutestudent g("asli",23,101,90,"yazilim muhendisligi");
    g.displayperson();
    g.displaystudent();
    g.displaygradutestudentthathegraduated();
    return 0;
}