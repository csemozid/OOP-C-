#include <iostream>
using namespace std;

int main() {
    string str;
    //string str = "Abdul Mozid";
    int i = 0, count = 0, count2 = 0;
    cin >> str;
    while(str[i] != '\0') {
        count++;
        i++;
    }

    for(i = 0; str[i] != '\0'; i++) {
        count2++;
    }
    cout <<"Length using length(): " << str.length() << endl;
    cout <<"Length using size(): " << str.size() << endl;
    cout << "Using while loop: The string " << str <<"'s " << "length is " << count <<endl;
    cout <<"Length using For loop: " << str.size() << endl;
    return 0;
}