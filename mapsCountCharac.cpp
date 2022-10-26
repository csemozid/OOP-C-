#include<iostream>
//#include<bits/stdc++.h>
#include<map>
using namespace std;

int main() {
    string str = "hello";
    map<char, int> m;
    for(int i = 0; i < str.length(); i++) {
        m[str[i]]++;
    }

    // for(auto pr: m) {
    //     cout << pr.first << " " << pr.second << endl;
    // }
    map<char, int> :: iterator it;
    for(it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " <<it->second << endl;
        //cout << (*it).first << " " <<(*it).second << endl;
    }

    return 0;
}