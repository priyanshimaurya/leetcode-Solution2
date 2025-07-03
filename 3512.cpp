#include<bits/stdc++.h>
using namespace std;
int minOperations(vector<int>& nums, int k) {
    return accumulate(nums.begin,nums.end(),0)%k;
}
int main() {
    vector<int> nums = {4,1,3};
    int k = 4;
    int result = minOperations(nums, k);
    cout << result << endl; 
    return 0;
}