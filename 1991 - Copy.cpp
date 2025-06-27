#include<iostream>
#include<vector>
using namespace std;
int findMiddleIndex(vector<int>& nums){
    int left,right;
    for(int i=0;i<nums.size();i++){
        left=0;
        for(int j=0;j<i;j++){
            
            left+=nums[j];
        }
        right=0;
        for(int j=i+1;j<nums.size();j++){
            right+=nums[j];
        }
        if(left==right){
            cout<<i<<endl;
        }
        
    }
    return -1;
}
int main(){
    vector<int> nums1={2,5};
    vector<int> nums2={2,3,-1,8,4};
    findMiddleIndex(nums1);
    findMiddleIndex(nums2);
}