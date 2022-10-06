#include <iostream>
#include <string.h>
using namespace std;

class Employee {
    public:
    string Name;
    string Company;
    int Age; 

    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

    void DisplayEmployeeDetails() {
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
    }
};

int main() {
    Employee employee1 = Employee("Abdul Mozid", "BJIT", 25);
    Employee employee2 = Employee("Sayed Hasan", "Therap BD", 26);
    Employee employee3 = Employee("Masud Parvez", "Enosis", 24);

    employee1.DisplayEmployeeDetails();
    cout << endl; 
    employee2.DisplayEmployeeDetails();
    cout << endl; 
    employee3.DisplayEmployeeDetails();

    return 0;
}