#include <iostream>
#include<map>
using namespace std;
void FindDuplicate(string &st) {
    map<char, int> m;
    for(int i = 0; i < st.length(); i++) {
        m[st[i]]++;
    }
    for(auto pr : m) {
        if(pr.second > 1) {
            cout << pr.first << " " << pr.second << endl;
        }
    }
}

int main() {
    string str = "geeksforgeeks hello";
    FindDuplicate(str);

    return 0;
}