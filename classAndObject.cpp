#include <iostream>
#include <string.h>
using namespace std;

class Employee {
    public:
    string name;
    string company;
    int age; 

    void DisplayEmployeeDetails() {
        cout << "Name: " << name << endl;
        cout << "Company: " << company << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Employee employee1;
    employee1.name = "Abdul Mozid";
    employee1.company = "BJIT";
    employee1.age = 25;

    
    Employee employee2;
    employee2.name = "Sayed Hasan";
    employee2.company = "Therap BD";
    employee2.age = 26;

    employee1.DisplayEmployeeDetails();
    cout << endl; 
    employee2.DisplayEmployeeDetails();


    return 0;
}