#include<bits/stdc++.h>
using namespace std;
vector<int> numberGame(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<int> res;
    while(!nums.empty()){
        int alice=nums[0];
        nums.erase(nums.begin());
        int bob=nums[0];
        nums.erase(nums.begin());
        res.push_back(bob);
        res.push_back(alice);

    }
    return res;
}
int main(){
    vector<int>nums={5,4,2,3};
    vector<int>result=numberGame(nums);
    for(int x:result){
        cout<<x<<" ";
    }
    return 0;
}