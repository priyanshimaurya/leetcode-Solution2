#include<bits/stdc++.h>
using namespace std;
int countHillValley(vector<int>& nums) {
    int count=0;
    int left=nums[0];
    for(int i=1;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            continue;
        }
        if((left<nums[i] && nums[i]>nums[i+1])|| left>nums[i] && nums[i]<nums[i+1]){
            count++;
            left=nums[i];
        }
    }        
    return count;
}
int main(){
    vector<int> nums={2,4,1,1,6,5};
    cout<<countHillValley(nums);
}