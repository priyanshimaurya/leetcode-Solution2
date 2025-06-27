#include<bits/stdc++.h>
using namespace std;
int countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
    int count=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]%modulo==k){
            count++;
        }
    }
    return count;
}
int main(){
    vector<int>nums={3,2,4};
    int modulo=2,k=1;
    cout<<countInterestingSubarrays(nums,modulo,k);
}