#include<bits/stdc++.h>
using namespace std;
int minOperations(vector<int>& nums) {
    int n=nums.size();
    int ans=0;
    for(int i=0;i<n;i++){
        if(nums[i]>=nums[i+1]){
            ans+=nums[i]+1 -nums[i];
            nums[i+1]=nums[i]+1;
        }
            
    }        
    return ans;
}
int main() {
    vector<int> nums = {1,1,1};
    cout << minOperations(nums) << endl;
    return 0;
}