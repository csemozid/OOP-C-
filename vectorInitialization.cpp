#include<iostream>
#include<vector>
using namespace std;
void printVec(vector<int> vec) {
    vector<int> :: iterator it;
    it = vec.begin();
    for(int i = 0; i < vec.size(); i++) {
        cout << *it <<" ";
        it++;
    }
    cout << endl;
}
int main() {
    vector<int> v(5, 1);
    printVec(v);

    return 0;
}