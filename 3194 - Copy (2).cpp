#include<iostream>
#include<vector>
#include<bits/stdc++.h> 
using namespace std;
 double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 1 << 30, n = nums.size();
        for (int i = 0; i < n; ++i) {
            ans = min(ans, nums[i] + nums[n - i - 1]);
        }
        return ans / 2.0;
    }
int main(){
    vector<int> nums={7,8,3,4,15,13,4,1};
    cout << "Minimum Average: " << minimumAverage(nums) << endl;
}