#include<iostream>
using namespace std;

class Myclass {

    int a;
public:
    Myclass();
    ~Myclass();
    void show();
};

Myclass :: Myclass() {
    cout << "In Constructor" << endl;
    a = 10;
}

Myclass :: ~Myclass() {
    cout << "Destructor" << endl;
}

void Myclass :: show() {
    cout << a << endl;
}

int main() {
    Myclass ob1;
    ob1.show();

    Myclass ob2(ob1); //copy constructor
    //Myclass ob2=ob1;
    ob2.show();


    return 0;
}