#include<iostream>
using namespace std;

class Base {
    int a;
protected:
    int b;
    int c;
public:
    int d;
    void set_a(int num) { a = num; }
    int get_a() { return a;}
};

class Derived: public Base {
    int e;
public:
    Derived(int m, int n, int o, int p, int q) {
        set_a(m);
        b = n;
        c = o;
        d = p;
        e = q;
    }
    void get_abcde() {
        cout << get_a() << b << c << d << e << endl;
    }
};

int main() {
    Derived ob1(2, 3, 4, 5, 6);
    ob1.get_abcde();

    return 0;
}