#include <iostream>

int main() {
    int grade;
    std::cout << "Enter your grade: ";
    std::cin >> grade;
    grade >= 60 ? std::cout << "Pass" << std::endl : std::cout << "Fail" << std::endl;
    switch (grade)
    {
    case 90 ... 100:
        std::cout << "Grade: A" << std::endl;
        break;
    case 80 ... 89:
        std::cout << "Grade: B" << std::endl;
        break;
    case 70 ... 79:
        std::cout << "Grade: C" << std::endl;
        break;
    case 60 ... 69:
        std::cout << "Grade: D" << std::endl;
        break;
    }

    
}  