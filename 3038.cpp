#include<bits/stdc++.h>
using namespace std;
int maxOperations(vector<int>& nums) {
    int count = 1, check = nums[0] + nums[1];
        for(int i = 3, n = nums.size(); i < n; i += 2){
            if(nums[i - 1] + nums[i] == check) {
                ++count;
            }
            
        }
        return count;
}
int main() {
    vector<int> nums = {3,2,1,4,5};
    int result = maxOperations(nums);
    cout << result << endl; 
    return 0;
}