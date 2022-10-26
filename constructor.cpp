#include<iostream>
using namespace std;

class Student {
    string name;
    string cls;
    int roll;
    public:
    Student() {
        cout << "Hey, I'm Constructor. I'm being called automatically every time when an object of my class is created!" << endl;
    }
};

int main() {
    Student s1, s2;


    return 0;
}