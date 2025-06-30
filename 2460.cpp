#include<bits/stdc++.h>
using namespace std;
vector<int> applyOperations(vector<int>& nums) {
    for(int i=0;i<nums.size();i++){
        if(nums[i]==nums[i+1]){
            nums[i]=nums[i]*2;
            nums[i+1]=0;
        }
    }    
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            ans.push_back(nums[i]);
        }
    }
    while (ans.size() < nums.size()) {
        ans.push_back(0);
    }

    return ans;
}
int main(){
    vector<int> nums={1,2,2,1,1,0};
    vector<int> result = applyOperations(nums);

    for (int x : result) {
        cout << x << " ";
    }
}