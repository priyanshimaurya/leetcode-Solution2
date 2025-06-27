#include<bits/stdc++.h>
using namespace std;

bool isArraySpecial(vector<int>& nums) {
    int count = 1; 
    for (int i = 1; i < nums.size(); i++) {
        if ((nums[i] % 2) != (nums[i-1] % 2)) {
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> nums = {4, 3, 1, 6};
    cout << isArraySpecial(nums);
}
