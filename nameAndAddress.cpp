#include <iostream>
using namespace std;
class Info {
    string name;
    string address;
    
    public:
    void store(string str1, string str2);
    void show();

};

void Info::store(string str1, string str2) {
    name = str1;
    address = str2;
}

void Info::show() {
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
}

int main() {
    Info ob1;
    ob1.store("Abdul Mozid", "Alinagar, Chapainawabganj");
    ob1.show();
    return 0;
}