#include<bits/stdc++.h>
using namespace std;
int minimumOperations(vector<int>& nums) {
    int ans=0;
    for(int x:nums){
        int mod=x%3;
        if(mod){
            ans+=min(mod,3-mod);
        }
    }
    return ans;
}
int main(){
    vector<int>nums={1,2,3,4};
    cout<<minimumOperations(nums)<<endl;
}