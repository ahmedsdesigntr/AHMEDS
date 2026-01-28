#include <iostream>
#include <cmath>

int main() {
    
    double number1;
    double number2;
    std::cout << "Enter a number: ";
    std::cin >> number1;
    std::cout << "Enter another number: ";
    std::cin >> number2;
    double sum = number1 + number2;
    std::cout << "The sum of " << number1 << " and " << number2 << " is " << sum << std::endl;
    std::cout << "Square root of " << number1 << " is " << std::sqrt(number1) << std::endl;
    std::cout << "Square root of " << number2 << " is " << std::sqrt(number2) << std::endl;
    std::cout << "Cosine of " << number1 << " is " << std::cos(number1) << std::endl;
    std::cout << "Cosine of " << number2 << " is " << std::cos(number2) << std::endl;

    char grade ;
    std::cout << "Enter your grade: ";
    std::cin >> grade;
    switch (grade) {
        case 'A':
            std::cout << "Excellent!" << std::endl;
            break;
        case 'B':
            std::cout << "Very good" << std::endl;
            break;
        case 'C':
            std::cout << "Well done" << std::endl;
            break;
        case 'D':
            std::cout << "You passed" << std::endl;
            break;
        case 'F':
            std::cout << "Better try again" << std::endl;
            break;
        default:
            std::cout << "Invalid grade" << std::endl;
    }

    std::string name = "";
    std::string surname = "";   
    int age = 19; 
    int birth_year = 2026 - age;
    bool is_engineer = true;
    double height = 1.75;
    int x= 10;
    std::cout << "Enter your name : ";
    std::cin >> name ;'\n';
    std::cout << "Enter your surname : ";
    std::cin >> surname;

    std::cout << "Hello i am , " << name << " " << surname << std::endl;
    std::cout << "I am " << age << " years old." << std::endl;
    std::cout << "I was born in " << birth_year << "." << std::endl;
    std::cout << "Am I an engineer? " << (is_engineer ? "Yes" : "no") << std::endl;
    std::cout << "My height is " << height << " meters." << std::endl;
    std::cout << x << std::endl;
    return 0;
}

