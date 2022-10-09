#include <iostream>
using namespace std;
void date(string date);
void date(int month, int day, int year);

int main() {
    date("10/9/2022");
    date(10, 9, 2022);
    return 0;
}

void date(string date){
    cout << date << endl;
}

void date(int month, int day, int year) {
    cout << month << "," << day << "," << year;

}