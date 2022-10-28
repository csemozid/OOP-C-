#include<iostream>
using namespace std;

class Myclass {
    int a, b;
public:
    void set(int m, int n) {a = m; b = n; }
    void show() { cout << a << " " << b << endl;}
};

int main() {
    Myclass ob1;
    ob1.set(3,4);
    ob1.show();
    //assign ob1 to ob2
    Myclass ob2 = ob1;
    ob2.show();

    return 0;
}