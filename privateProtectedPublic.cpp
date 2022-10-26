#include<iostream>
using namespace std;

class samp {
    int a;
protected:
    int b;
public:
    int c;
    samp(int m, int n) {a = m; b = n;}
    int get_a() { return a; }
    int get_b() { return b; }
};

int main() {
    samp ob(10, 20);
    ob.c = 30;
    //ob.b = 99; Error! because b is protected and not accessable
    //only accessable by derived class of the samp class
    cout << ob.get_a() <<" "<< ob.get_b()<<" "<< ob.c <<endl;

    return 0;
}