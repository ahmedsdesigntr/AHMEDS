#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    float mark;

public:
    void setName(string n) {
        name = n;
    }

    void setMark(float m) {
        if (m >= 0 && m <= 100)
            mark = m;
    }

    string getName() {
        return name;
    }

    float getMark() {
        return mark;
    }

    bool isPassed() {
        return mark >= 50;
    }
};

int main() {
    Student stu;
    string name;
    float mark;

    cout << "Name: ";
    cin >> name;

    cout << "Mark: ";
    cin >> mark;

    stu.setName(name);
    stu.setMark(mark);

    cout << "Name: " << stu.getName() << endl;
    cout << "Mark: " << stu.getMark() << endl;

    if (stu.isPassed())
        cout << "Passed" << endl;
    else
        cout << "Failed" << endl;

    return 0;
}