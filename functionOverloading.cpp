#include <iostream>
using namespace std;

void abs1(int a) {
    if(a < 0) {
        cout <<"Called Int:"<< -a << endl;
    }
}

void abs1(double a) {
    if(a < 0) {
        cout << "Called Double:" << -a << endl;
    }
}

int main() {
    abs1(-23);
    abs1(-19.2);

    return 0;
}