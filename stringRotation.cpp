#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1, str2;
    int flag = 0;
    char temp;
    cin >> str1 >> str2;
    if(str1.size() != str2.size()) {
        cout << "NO" << endl;
        return 0;
    }
    queue<char> q, q1;
    //queue<char> q1;
    for(int i = 0; i < str2.length(); i++) {
        q.push(str2[i]);
        q1.push(str1[i]);
    }
    for(int j = 0; j < str2.length(); j++) {
        if(q1 == q) {
            flag = 1;
            break;
        }
        temp = q.front();
        //cout << q.front() << endl;
        q.pop();
        q.push(temp);
        //cout << str2 << endl;
        
    }
    if(flag == 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    

    return 0;
}