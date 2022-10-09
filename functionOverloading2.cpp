#include <iostream>
using namespace std;
// int abs(int num) {
//     if(num < 0) {
//         return num = -num;
//     }
//     return num;
// }
// long abs(long num) {
//     if(num < 0) {
//         return num = -num;
//     }
//     return num;

// }
// double abs(double num) {
//     if(num < 0) {
//         return num = -num;
//     }
//     return num;
// }
int main() {
    cout << "Absolute value of -10 is: " << abs(-10) << endl;
    cout << "Absolute value of -10L is: " << abs(-10L) << endl;
    cout << "Absolute value of -10.02 is: " << abs(-10.02) << endl;
    return 0;
}