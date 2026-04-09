#include<iostream>
using namespace std;

class shape {
public:
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }
};

class circle : public shape {
public:
    void draw() {
        cout << "Drawing a circle" << endl;
    }
};

class rectangle : public shape {
public:
    void draw() {
        cout << "Drawing a rectangle" << endl;
    }
};

int main() {
    shape *s1 = new circle();
    shape *s2 = new rectangle();

    (*s1).draw();
    (*s2).draw();

    
    return 0;
}