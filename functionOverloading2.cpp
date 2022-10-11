#include <iostream>
using namespace std;
int abs1(int num) {
    if(num < 0) {
        return num = -num;
    }
    return num;
}
long abs1(long num) {
    if(num < 0) {
        return num = -num;
    }
    return num;

}
double abs1(double num) {
    if(num < 0) {
        return num = -num;
    }
    return num;
}
int main() {
    cout << "Absolute value of -10 is: " << abs1(-10) << endl;
    cout << "Absolute value of -10L is: " << abs1(-10L) << endl;
    cout << "Absolute value of -10.02 is: " << abs1(-10.02) << endl;
    return 0;
}