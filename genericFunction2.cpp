#include <iostream>
using namespace std;
template <typename X, typename Y> void introduce(X val1, Y val2) {
    cout << "Name: " << val1 << endl;
    cout << "Age: " << val2 << endl;
    cout << endl;
}

int main() {
    introduce("Abdul Mozid", 25);
    introduce(24, "Mim");

    return 0;
}