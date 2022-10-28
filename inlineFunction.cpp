#include<iostream>
using namespace std;

inline int isEven(int num) {
    return !(num%2);
}

int main() {
    int n;
    if(isEven(10)) {
        cout << "even";
    }
    if(isEven(11)) {
        cout << "even";
    }

    return 0;
}