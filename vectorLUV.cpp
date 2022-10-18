#include<iostream>
#include<vector>
using namespace std;
// 5
// 1 2 3 4 5 
// Output: Size: 5
// 1 2 3 4 5 
void printVec(vector<int> vec) {
    // for(int i = 0; i < vec.size(); i++) {
    //     cout << vec[i] << " ";
    // }
    vector<int> :: iterator it;
    it = vec.begin();
    while(it != vec.end()) {
        cout << *it <<" ";
        it++;
    }
    // it = vec.end();
    // while(!vec.empty()) {
    //     cout << *it << " ";
    //     vec.pop_back();
    // }
}
int main() {
    vector<int> v;
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    printVec(v);

    return 0;
}