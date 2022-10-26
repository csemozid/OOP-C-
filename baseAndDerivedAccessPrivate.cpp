#include<iostream>
using namespace std;

class Base {
    int x;
public:
    void set_x(int n) { x = n; }
    int get_x() { return x; }
};

class Derived : public Base {
    int y;
public:
    void set_y(int n) { y = n; }
    int get_y() { return y; }
    int calSum() {return x + y; }
};

int main() {
    Derived ob;

    ob.set_x(3);
    ob.set_y(7);

    cout << ob.calSum();


}