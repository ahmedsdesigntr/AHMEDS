#include <iostream>
using namespace std;
class Product {
private:
    string name;
    double price;
    int quantity;
public: 
    Product() : name("bilinmiyorum beeee"), price(0.0), quantity(0) {}

    Product (string n, double p )  : name(n), price(p) {
        quantity = 1;
        if (p<0)
            price=0;
        else{
            price=p;
        } 
    };

    Product(string n, double p, int q) : name(n), price(p), quantity(q) {
        if (p<0)
            price=0;
        else{
            price=p;   
        if (q<0)
            quantity=0;
        else
            quantity=q;
        }

    };
    void display() {
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
    }
};
int main() {

    Product d1;
    Product p1("ahmed", 999.99);
    Product p2("watfe", 499.99, 20);
    
    cout << "Product Inventory:" << endl;
    d1.display();
    cout << endl;
    p2.display();
    cout << endl;
    p1.display();
    
    
    
    return 0;
}
