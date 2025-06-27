#include <bits/stdc++.h>
using namespace std;

int getMinDistance(vector<int>& nums, int target, int start) {
    int minDist = INT_MAX;

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == target) {
            minDist = min(minDist, abs(i - start));
        }
    }

    return minDist;
}

int main() {
    vector<int> nums = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int target = 1, start = 0;
    cout << getMinDistance(nums, target, start);  
}
