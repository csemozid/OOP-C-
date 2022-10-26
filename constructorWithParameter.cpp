#include<iostream>
using namespace std;

class Employee {
    string Name;
    string CompanyName;
    int Age;
public:
    Employee(string name, string companyName, int age);
    ~Employee();
    void show();
};

Employee :: Employee(string name, string companyName, int age) {
    Name = name;
    CompanyName = companyName;
    Age = age;
}

Employee :: ~Employee() {
    cout << "Destructor Called" << endl;
}

void Employee ::show() {
    cout << "Name: " << Name << endl;
    cout << "Company Name: " << CompanyName << endl;
    cout << "Age: " << Age << endl;
    cout << endl;
}

int main() {
    Employee em1("Abdul Mozid", "Youtube", 25);
    em1.show();

    Employee em2("Hasan", "Facbook", 23);
    em1.show();


    return 0;
}