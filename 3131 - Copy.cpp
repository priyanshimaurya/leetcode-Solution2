#include<bits/stdc++.h>
using namespace std;
int addedInteger(vector<int>& nums1, vector<int>& nums2) {
    int min1=INT_MAX,min2=INT_MAX;
    for(auto x:nums1){
        min1=min(min1,x);
    }
    for(auto x:nums2){
        min2=min(min2,x);
    }
    return min2-min1;
}
int main(){
    vector<int>nums1={2,6,4},nums2={9,7,5};
    cout<<addedInteger(nums1,nums2);
}