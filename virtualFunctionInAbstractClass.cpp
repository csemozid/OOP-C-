#include <iostream>
using namespace std;
// The base class can be called abstract class because because it consists at least one pure virtual method
class Base {
    int x;
public:
    virtual void fun() = 0;
    int getX() {
        return x;
    }
};

class Derived {
    int y;
public:
    void fun() {
        cout << "Function fun() from derived class is called" << endl;
    }
    int getY() {
        return y;
    }
};


int main() {
    Derived ob;
    ob.fun();

    return 0;
}