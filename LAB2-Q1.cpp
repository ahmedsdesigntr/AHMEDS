#include <iostream>
using namespace std;
#include <cmath>
class Circle {
private:
    float radius;

public:
    void setRadius(float r) {
        if (r > 0) {
            radius = r;
        } else {
            cout << "Radius must be positive." << endl;
            radius = 0;
        }
    }

    float getRadius() {
        return radius;
    }

    float getArea() {
        const float PI = 3.1415 ;
        return PI * radius * radius;
    }
};

int main() {
    Circle cir;

    float r;
    cout << "Enter radius: ";
    cin >> r;

    cir.setRadius(r);

    cout << "Radius: " << cir.getRadius() << endl;
    cout << "Area: " << cir.getArea() << endl;

    return 0;
}
