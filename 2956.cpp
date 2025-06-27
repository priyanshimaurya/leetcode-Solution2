#include<bits/stdc++.h>
using namespace std;
vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
    set<int> s1(nums1.begin(),nums1.end());
    set<int> s2(nums2.begin(),nums2.end());
    int count1=0;
    for(int num:nums1){
        if(s2.count(num)){
            count1++;
        }
    }        
    int count2=0;
    for(int num:nums2){
        if(s1.count(num)){
            count2++;
        }
    }
    return {count1, count2};
}
int main(){
    vector<int> nums1={2,3,2};
    vector<int>nums2={1,2};
    vector<int> result = findIntersectionValues(nums1, nums2);
    cout << "Count in nums1: " << result[0] << endl;
}