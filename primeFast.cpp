#include<iostream>
#include<math.h>
using namespace std;
bool IsPrime(long long n) {
    for(int i = 2; i < sqrt(n); i++) {
        if(n/i == 0) return false;
    }
    return true;
}

int main() {
    long long num;
    cin >> num;
    int val = IsPrime(num);
    if(val == 1) cout << "Prime" << endl;
    else cout << "Not Prime" << endl;

    return 0;
}