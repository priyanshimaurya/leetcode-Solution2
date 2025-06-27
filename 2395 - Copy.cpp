#include<bits/stdc++.h>
using namespace std;
bool findSubarrays(vector<int>& nums) {
    int count=0;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[j]+nums[j+1]==nums[i]+nums[i+1]){
                count++;
            }
        }
    }
    return count>=1;
}
int main(){
    vector<int> nums={4,2,4};
    cout<<findSubarrays(nums);
}
