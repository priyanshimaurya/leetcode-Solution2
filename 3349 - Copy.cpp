#include <bits/stdc++.h>
using namespace std;

bool hasIncreasingSubarrays(vector<int>& nums, int k) {
    if(nums.size() < k){
        return false;
    }

    for (int i = 0; i <= nums.size() - k; i++) {
        bool isIncreasing = true;
        for (int j = i + 1; j < i + k; j++) {
            if (nums[j] <= nums[j - 1]) {
                isIncreasing = false;
                break;
            }
        }
        if (isIncreasing) {
            return true;
        }
    }

    return false;
}

int main() {
    vector<int> nums = {-3,-19,-8,-16};
    int k = 2;
    cout << (hasIncreasingSubarrays(nums, k) ? "true" : "false") << endl;
}
