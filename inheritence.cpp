#include<iostream>
using namespace std;

class Base {
    int i;
public:
    void set_i(int n);
    int get_i();
};

class Derived : public Base {
    int j;
public:
    void set_j(int n);
    int mul();
};

void Base :: set_i(int n) {
    i = n;
}

int Base::get_i() {
    return i;
}

void Derived :: set_j(int n) {
    j = n;
}

int Derived :: mul() {
    return j * get_i();
}

int main() {
    Derived ob1;
    ob1.set_i(3);
    ob1.set_j(10);

    cout << ob1.mul() << endl;

    return 0;
}