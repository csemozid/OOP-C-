#include <iostream>
#include<map>
using namespace std;

int main() {
    map<char, int> m;

    for(int i = 0; i < 10; i++) {
        m.insert(pair<char, int>('A'+i, i));
    }
    char ch;
    cout <<"Enter a Char to search: ";
    cin >> ch;
    map<char, int>::iterator it;
    it = m.find(ch);
    if(it != m.end()) {
        cout << ch <<" consists in: ";
        cout << it->first << " " << it->second << endl;
    }
    else cout << "The key is not in the Map" << endl;


    return 0;
}