#include <iostream>
using namespace std;

class Base {
    private:
        int x;
    public:
        void setX(int x) {
            this->x = x;
        }
        int getX() {
            return x;
        }
        void print() {
           cout << "Base" << endl;
        }
};

class Derived : public Base {
    public:
     void print() {
        cout << "Derived" << endl;
     }
};

int main() {
    Derived ob1;
    ob1.print();
    ob1.setX(10);
    cout << ob1.getX();

    return 0;
}