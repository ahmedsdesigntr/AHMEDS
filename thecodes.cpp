#include <iostream>
using namespace std;

int add(int a, int b) {
    a = a + b;
    return a;
}

double add(double a, double b) {
    a = a + b;
    return a;
}

int add(int a, int b, int c) {
    a = a + b + c;
    return a;
}

int main() {
    int a = 5, b = 10, c = 15;
    double d3 = 2.7, d4 = 3.7;

    cout << "add(int, int): " << add(a, b) << endl;
    cout << "add(double, double): " << add(d3, d4) << endl;
    cout << "add(int, int, int): " << add(a, b, c) << endl;

    return 0;
}
