#include<iostream>
#include<vector>
using namespace std;
int mostFrequentEven(vector<int>& nums) {
    int n=nums.size();
    int maxcount=0;
    int maxnum=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(nums[i]==nums[j] && nums[i]%2==0){
                count++;
            }
        }
        if(count>maxcount){
            maxcount=count;
            maxnum=nums[i];
        }
    }
    return maxnum;
}
int main(){
    vector<int>nums={29,47,21,41,13,37,25,7};
    cout<<mostFrequentEven(nums)<<endl;
}
