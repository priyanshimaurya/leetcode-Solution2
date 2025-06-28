#include<bits/stdc++.h>
using namespace std;
vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        vector<pair<int, int>> vals;  
        for (int i = 0; i < n; ++i) {
            vals.emplace_back(i, nums[i]);
        }
        sort(vals.begin(), vals.end(),
             [&](auto x1, auto x2) { return x1.second > x2.second; });
        sort(vals.begin(), vals.begin() + k);
        vector<int> res; 
        for (int i = 0; i < k; ++i) {
            res.push_back(vals[i].second);
        }
        return res;
    }
int main() {
    vector<int> nums = {3, 5, 2, 6,7, 4, 1, 8};
    int k = 3;
    vector<int> result = maxSubsequence(nums, k);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}