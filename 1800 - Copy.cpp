#include<bits/stdc++.h>
using namespace std;
int maxAscendingSum(vector<int>& nums) {
    int curr = nums[0], ans = nums[0];

    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] > nums[i - 1]) {
            curr += nums[i];
        } else {
            curr = nums[i];  
        }
        ans = max(ans, curr);
    }
    return ans;
}
int main(){
    vector<int> nums={10,20,30,5,10,50};
    cout<<maxAscendingSum(nums);
}