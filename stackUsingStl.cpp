#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // string s1, s2;
    // cin >> s1 >> s2;

    stack<char> s;
    s.push('a');
    s.push('b');
    s.push('c');
    s.push('d');
    // s.push(s1);
    // s.push(s2);
    while(!s.empty()) {
        cout << s.top();
        s.pop();
    }
    cout << endl;

    return 0;
}