#include <iostream>
#include <stdexcept>

using namespace std;

class Numeric {
private:
    double value;

public:
    explicit Numeric(double val) : value(val) {}

    double getValue() const { return value; }

    friend Numeric operator+(const Numeric& a, const Numeric& b);
    friend Numeric operator-(const Numeric& a, const Numeric& b);
    friend Numeric operator*(const Numeric& a, const Numeric& b);
    friend Numeric operator/(const Numeric& a, const Numeric& b);
    friend ostream& operator<<(ostream& os, const Numeric& n);
};

Numeric operator+(const Numeric& a, const Numeric& b) {
    return Numeric(a.value + b.value);
}

Numeric operator-(const Numeric& a, const Numeric& b) {
    return Numeric(a.value - b.value);
}

Numeric operator*(const Numeric& a, const Numeric& b) {
    return Numeric(a.value * b.value);
}

Numeric operator/(const Numeric& a, const Numeric& b) {
    if (b.value == 0) {
        throw runtime_error("Division by zero");
    }
    return Numeric(a.value / b.value);
}

ostream& operator<<(ostream& os, const Numeric& n) {
    os << n.value;
    return os;
}

int main() {
    try {
        Numeric num1(10);
        Numeric num2(5);

        Numeric sum = num1 + num2;
        Numeric difference = num1 - num2;
        Numeric product = num1 * num2;
        Numeric quotient = num1 / num2;

        cout << "Sum: " << sum << endl;
        cout << "Difference: " << difference << endl;
        cout << "Product: " << product << endl;
        cout << "Quotient: " << quotient << endl;

    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }

    return 0;
}
