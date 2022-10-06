#include <iostream>
#include <string.h>
using namespace std;

class Employee {
    public:
    string Name;
    string Company;
    int Age; 

    Employee() {
        cout << "Hey I'm Constructor, I'm being called automatically!" << endl;
    }
};

int main() {
    Employee e1;
    return 0;
}