#include<iostream>
using namespace std;
class Base {
    int x;
public:
    void set_x(int n) { x = n; };
    int show_x() { return x; };
};

class Derived : private Base {
    int y;
public:
    void setx_y(int m, int n) {set_x(m); y = n; };
    void showx_y() { cout << show_x() << " " << y <<endl; };
};

int main() {
    Derived ob;
    ob.setx_y(10, 20);

    ob.showx_y();
    
    return 0;
}