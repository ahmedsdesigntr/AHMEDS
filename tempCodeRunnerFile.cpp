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
    Student s;
    string name;
    float mark;

    cout << "Name: ";
    cin >> name;

    cout << "Mark: ";
    cin >> mark;

    s.setName(name);
    s.setMark(mark);

    cout << "Name: " << s.getName() << endl;
    cout << "Mark: " << s.getMark() << endl;

    if (s.isPassed())
        cout << "Passed" << endl;
    else
        cout << "Failed" << endl;

    return 0;
}