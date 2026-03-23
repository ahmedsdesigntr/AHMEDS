#include <iostream>

int main() {
    char op;
    double num1, num2, result;
    std::cout << "!!!!!!! Simple Calculator!!!!!!! " << std::endl << "\n";

    std::cout << "Select an operation (+, -, *, /): ";"\n";
    std::cin >> op;"\n";

    std::cout << "Enter first number: ";"\n";
    std::cin >> num1;"\n";

    std::cout << "Enter second number: ";"\n";
    std::cin >> num2;"\n";

    std::cout << "the result is: " ;"\n";
    switch (op) {
        case '+':
            result = num1 + num2;
            std::cout << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            std::cout << result << std::endl;
            break;
        case '*':
            result = num1 * num2;
            std::cout << result << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << result << std::endl;
            } else {
                std::cout << "Error: Division by zero!" << std::endl;
            }
            break;
        default:
            std::cout << "Error: Invalid operation!" << std::endl;
            break;
        
    }
    std::cout << "-----------------------------" << std::endl;
    char a;
    std::cout << "Enter any key to   " << std::endl;
    std::cin >> a;
    if (a) {
        std::cout << "Exiting the calculator. Goodbye!" << std::endl;
    }

    bool yes = true ;
    std::cout << "Are you sure you want to exit? (true/false): " << std::endl;
    std::cin >> yes;
    if (yes) {
        std::cout << "Exiting confirmed." << std::endl;
    }

    return 0;    
}