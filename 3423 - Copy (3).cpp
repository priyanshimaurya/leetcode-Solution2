#include<bits/stdc++.h>
using namespace std;
int maxAdjacentDistance(vector<int>& nums) {
    int n = nums.size();
    int res=nums[0]-nums[n-1];
    for(int i=0;i<n-1;i++){
        res=max(res,abs(nums[i]-nums[i+1]));
    }
    return res;
}
int main() {
    vector<int> nums = {-4,-2,-3};
    cout << maxAdjacentDistance(nums) << endl;
    return 0;
}