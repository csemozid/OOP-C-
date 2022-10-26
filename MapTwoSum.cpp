#include<iostream>
#include<map>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> V;
    map<int, int> m;
    for(int i = 0; i < nums.size(); i++) {
        if(m.find(target-nums[i]) != m.end()) {
            V.push_back(m[target-nums[i]]);
            V.push_back(i);
            return V;
        }
        m[nums[i]] = i;
    }
    return V;
}
int main() {
    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(1);

    int tar = 6;
    vector<int> vec = twoSum(v, tar);
    for(int i = 0; i< vec.size();i++){
        cout << vec[i];
    }

    // vector<int> :: iterator it;
    // it = v.begin();
    // while(it != v.end()) {
    //     cout << *it << " " << endl;
    //     it++;
    // }
    return 0;
}
