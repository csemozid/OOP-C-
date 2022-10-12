#include <iostream>
using namespace std;

template <class T> void swapagrs(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 5, b = 10;
    float i = 6.66, j = 7.56;
    swapagrs(a,b);
    swapagrs(i,j);
    cout << "a: " << a << " b: " << b << endl;
    cout << "i: " << i << " j: " << j << endl;
    return 0;
}