#include<iostream>
#include <list>
using namespace std;

int main() {
    list<char> lst;
    cout << "Size of the List: " << lst.size() << endl;
    for(int i = 0; i < 10; i++) {
        lst.push_back('A'+i);
    }
    cout << "Size of the List: " << lst.size() << endl;

    list<char>::iterator it;
   
    while(!lst.empty()){
        it = lst.begin();
        cout << *it << " ";
        lst.pop_front();
        //lst.pop_back();
        //it++;
    }

    return 0;
}