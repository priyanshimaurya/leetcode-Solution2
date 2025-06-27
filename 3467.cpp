#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
vector<int> transformArray(vector<int>& nums) {
        vector<int> arr(nums.size(), 1);
        for(int i=0,j=0;i<nums.size();i++) if(nums[i]%2==0) arr[j++]=0;
        return arr;
     
}
int main(){
    vector<int> nums={4,3,2,1};
    vector<int> ans=transformArray(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
//     return 0;