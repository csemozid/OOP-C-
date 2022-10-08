#include <iostream>
using namespace std;

int main() {
    int noOfHrs, wage;
    cout << "Enter no. of hours: ";
    cin >> noOfHrs;
    cout << "Enter the wage of the employee: ";
    cin >> wage;
    cout << "Employe's gross pay: " << noOfHrs*wage << endl;
    
    return 0;
}