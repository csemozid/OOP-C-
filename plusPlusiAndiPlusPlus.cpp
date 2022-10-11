#include <iostream>
using namespace std;

int main() {
    int i = 5, j;
    //j =  ++i;
    j = i++;
    cout << "i: " << i <<endl;
    cout << "j: " << j << endl;

    return 0;
}