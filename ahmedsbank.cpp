include<iostream>
using namespace std;
numeric operator+(const numeric& a, const numeric& b) {
    return numeric(a.value + b.value);
}   
numeric operator-(const numeric& a, const numeric& b) {
    return numeric(a.value - b.value);
}
numeric operator*(const numeric& a, const numeric& b) {
    return numeric(a.value * b.value);
}
numeric operator/(const numeric& a, const numeric& b) {
    if (b.value == 0) {
        throw runtime_error("Division by zero");
    }
    return numeric(a.value / b.value);
}
int main() {
    numeric num1(10);
    numeric num2(5);
    
    numeric sum = num1 + num2;
    numeric difference = num1 - num2;
    numeric product = num1 * num2;
    numeric quotient = num1 / num2;
    
    cout << "Sum: " << sum.value << endl;
    cout << "Difference: " << difference.value << endl;
    cout << "Product: " << product.value << endl;
    cout << "Quotient: " << quotient.value << endl;

    return 0;
}
