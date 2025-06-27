#include<iostream>
#include<vector>
using namespace std;
int countSubarrays(vector<int>& nums, int count = 0) {
    for (int i = 0 ; i + 2 < nums.size(); i++)
        if ( (nums[i] + nums[i + 2]) == nums[i + 1]) 
            count++;
    return count;
}
int main(){
    vector<int>nums={1,2,1,4,1};
    cout<<countSubarrays(nums)<<endl;
}