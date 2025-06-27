#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int specialArray(vector<int> nums){
    int n=nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0;i<=n;i++){
        if(nums[i-1]>=i && (i==n || nums[i]<i)){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> nums={0,0};
    cout<<specialArray(nums)<<endl;
}