#include<iostream>
#include<map>
using namespace std;
void print(map<int, string> &map) {
    cout << "Map Size: " << map.size() << endl;
    for(auto &it : map) {
        cout << it.first << " "<< it.second << endl;
    }
}
int main() {
    map<int, string> m;
    m[1] = "Hello, ";
    m[5] = "you";
    m[3] = "how";
    m[4] = "are";
    //m.insert({ 2, "Hi"});
    print(m);

}