#include <iostream>
#include<map>
using namespace std;
void FindElement(map<int, string> &m, int n) {
    
    // m.insert({1, "A.Mozid"});
    // m.insert({2, "Shakib"});
    // m.insert({3, "Tahmid"});
    map<int, string> :: iterator it;
    
    // for(it = m.begin(); it != m.end(); it++) {
    //     cout << it->first << " " << it->second << endl;
    // }
    it = m.find(n);
    if(it != m.end()) cout << "Found one:" << it->first << " " << it->second << endl;
    else cout << "Not a student" << endl;

    // map<int, int> :: iterator it;
    // it = m.find(num);
    // if(it != m.end()) {
    //     cout << "Found It: " << it->first << " " << it->second << endl;
    // }
    // else cout << "Not Found" << endl;
}
int main() {
    int r;
    
    map<int, string> m;
    cout << "Enter students name: ";
    for(int i = 1; i < 4; i++) {
        //m[i] = i+i;
        cin >> m[i];
    }
    cout << "Enter Roll Number to find student: ";
    cin >> r;
    FindElement(m, r);
    return 0;
}