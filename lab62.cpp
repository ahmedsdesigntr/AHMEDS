#include <iostream>
using namespace std;

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
    double add(double a, double b)
    {
        return a + b;
    }
    double add(double a, double b, double c)
    {
        return a + b + c;
    }
};

class Complex
{
public:
    double real;
    double imag;
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    Complex operator+(const Complex& other)
    {
        return Complex(real + other.real, imag + other.imag);
    }
};

int main()
{
    calculator calc;
    cout << "Sum of 2 integers: " << calc.add(5, 10) << endl;
    cout << "Sum of 3 integers: " << calc.add(5, 10, 15) << endl;
    cout << "Sum of 2 doubles: " << calc.add(5.5, 10.5) << endl;
    cout << "Sum of 3 doubles: " << calc.add(5.5, 10.5, 15.5) << endl;

    Complex c1(1.5, 2.0);
    Complex c2(3.0, 4.7);
    Complex c3 = c1 + c2;
    cout << "Sum of complex numbers: " << c3.real << " + " << c3.imag << "i" << endl;

    return 0;
}