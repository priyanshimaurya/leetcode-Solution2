#include<bits/stdc++.h>
using namespace std;
int distinctAverages(vector<int>& nums) {
    sort(nums.begin(),nums.end()) ;
    set<int>s;
    int n=nums.size();
    for(int i=0;i<n/2;i++){
        s.insert(nums[i]+nums[n-i-1]);
    }       
    return s.size();

}
int main() {
    vector<int> nums = {1,100};
    cout << distinctAverages(nums) << endl;
    return 0;
}