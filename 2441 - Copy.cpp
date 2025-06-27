#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMaxK(vector<int>& nums) {
    int maxK = -1;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < nums.size(); j++) {
            if (nums[i] > 0 && nums[i] == -nums[j]) {
                maxK = max(maxK, nums[i]);
            }
        }
    }
    return maxK;
}

int main() {
    vector<int> nums = {-1, 2, -3, 3};
    int result = findMaxK(nums);
    cout << result; 
}