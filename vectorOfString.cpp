#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> v;
    cout << v.size() << endl;
    v.push_back("Hello, Good Morning ");
    v.push_back("I'm ");
    v.push_back("Abdul ");
    v.push_back("Mozid ");

    vector<string>::iterator it = v.begin();
    while(it != v.end()) {
        cout << *it;
        it++;
    }

    return 0;
}