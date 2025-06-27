#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countPairs(vector<int>& nums, int target) {
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] < target) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    vector<int> nums = {-6,2,5,-2,-7,-1,3};
    int target = -2;
    int result = countPairs(nums, target);
    cout << result;
}