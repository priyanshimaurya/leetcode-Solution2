#include <bits/stdc++.h>
using namespace std;

int returnToBoundaryCount(vector<int>& nums) {
    int sum = 0, count = 0;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    vector<int> nums = {3,2,-3,-4};
    cout << returnToBoundaryCount(nums);  
}
