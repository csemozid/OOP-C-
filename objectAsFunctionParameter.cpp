#include<iostream>
using namespace std;

class Myclass {
    int a;
public:
    void set_a(int n) {a = n; } //Inline function
    int get_a() { return a; } //Inline function
};

int calcSquare(Myclass ob) {
    return ob.get_a()*ob.get_a();
}


int main() {
    Myclass ob1, ob2;
    ob1.set_a(10);
    ob2.set_a(4);
    cout << calcSquare(ob1) << endl;
    cout << calcSquare(ob2) << endl;
    return 0;
}