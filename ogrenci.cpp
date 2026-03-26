#include <iostream>
#include <string>
using namespace std;

class ogrenci {
private:
    int grade;
    string name;

public:
    // Constructor
    ogrenci(string n, int g) {
        name = n;
        grade = g;
    }

    // Default constructor
    ogrenci() {
        name = "ahmed";
        grade = 100;
    }

    void showInfo() {
        cout << "Name: " << name << endl;
        cout << "Grade: " << grade << endl;
    }

    // Friend class
    friend class teacher;
};

// Teacher class
class teacher {
public:
    void increaseGrade(ogrenci& student, int g) {
        student.grade += g;
    }
};

int main() {
    ogrenci student1("Ali", 85);
    ogrenci student2;

    student1.showInfo();
    student2.showInfo();

    teacher t;
    t.increaseGrade(student1, 10);

    cout << "After increasing grade:" << endl;
    student1.showInfo();

    return 0;
}