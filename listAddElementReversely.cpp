#include<iostream>
#include<list>
using namespace std;

int main() {
    list<char> lst;
    list<char> revlst;

    
    for(int i = 0; i < 10; i++) {
        lst.push_back('A' + i);
    }
    cout << "Size of the  lst: " << lst.size() << endl;
    cout << "Original Contents: ";
    list<char>::iterator it;
    while(!lst.empty()) {
        it = lst.begin();
        cout << *it << " ";
        lst.pop_front();
        revlst.push_front(*it);
    }
    cout << endl;
    cout << "Size of the revlst: " << revlst.size() << endl;
    cout <<"Reverse list content: ";
    it = revlst.begin();
    while(it != revlst.end()) {
        cout << *it << " ";
        it++;
    }
    cout << endl;
    return 0;
}