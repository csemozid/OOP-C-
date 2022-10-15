#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<string> q;
    q.push("Hello");
    q.push(" Abdul");
    q.push(" Mozid");

    while(!q.empty()) {
        cout << q.front();
        q.pop();
    }


    return 0;
}