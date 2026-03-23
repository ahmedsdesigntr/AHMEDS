#include <iostream>
using namespace std;

class Student {
private:
    string name;
    double gpa;
    double final_exam;
    double midterm_exam;
    char grade;

public:
    Student(string n, double m, double f) {
        name = n;

        if (m >= 0 && m <= 100)
            midterm_exam = m;
        else
            midterm_exam = 0;

        if (f >= 0 && f <= 100)
            final_exam = f;
        else
            final_exam = 0;

        gpa = 0;
        grade = 'F';
    }

    void calculate_gpa() {
        gpa = (final_exam * 0.6) + (midterm_exam * 0.4);
    }

    void calculateGrade() {
        if (gpa >= 90)
            grade = 'A';
        else if (gpa >= 80)
            grade = 'B';
        else if (gpa >= 70)
            grade = 'C';
        else if (gpa >= 60)
            grade = 'D';
        else
            grade = 'F';
    }

    void display() {
        cout << "\nStudent Name: " << name << endl;
        cout << "GPA: " << gpa << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student ahmed("Ahmed", 85.0, 90.0);
    Student ali("Ali", 75.0, 80.0);

    ahmed.calculate_gpa();
    ahmed.calculateGrade();
    ahmed.display();

    ali.calculate_gpa();
    ali.calculateGrade();
    ali.display();

    return 0;
}