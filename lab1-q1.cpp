#include <iostream>

int main() {
    
    double number1,number2,number3;

    std::cout << "Enter a number: ";
    std::cin >> number1;
    std::cout << "Enter another number: ";
    std::cin >> number2;
    std::cout << "Enter another number: ";
    std::cin >> number3;
    double sum = number1 + number2 + number3 ;
    std::cout << "The sum of is " << sum << std::endl;

    float avg = (sum)/3.0;

    std::cout << "the avarage is "<< avg << std::endl; ;


    return 0;
}

