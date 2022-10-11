#include <iostream>
using namespace std;

void decToBinary(int n) {
    int digits[32], i = 0;
    while(n > 0) {
        digits[i] = n % 2;
        n = n/2;
        ++i;
    }
    for(int j = i-1; j >= 0; j--) {
        cout << digits[j] << " ";
    }
    cout << endl;
}

int main() {
    int num;
    cin >> num;
    decToBinary(num);

    return 0;
}