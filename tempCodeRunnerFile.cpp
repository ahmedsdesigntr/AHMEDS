include<iostream>
using namespace std;
include<string>;
class ogrenci{
    private:
    int grade ;
    string name;
    public:
    ogrenci(string n, int g){
        name = n;
        grade = g;
    }
    ogrenci(){
        name = "Unknown";
        grade = 0;
    }
    ogrenci(){
        name = "ahmed";
        grade = 100;
    }

    void showInfo(){
        cout << "Name: " << name << endl;
        cout << "Grade: " << grade << endl;
    }
friend class teacher;
    private:
    int grade ;
    string name;
public:
    increaseGrade(ogrenci& student, int g){
        student.grade += g;
    }

};
int main(){
    ogrenci student1("Ali", 85);
    ogrenci student2;
    ogrenci student3;

    student1.showInfo();
    student2.showInfo();
    student3.showInfo();

    teacher t;
    t.increaseGrade(student1, 5);
    cout << "After increasing grade:" << endl;
    student1.showInfo();

    return 0;
}