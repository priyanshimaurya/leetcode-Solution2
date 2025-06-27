#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> divideArray(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;

    if (nums.size() % 3 != 0) return {};

    for (int i = 0; i < nums.size(); i += 3) {
        if (nums[i+2] - nums[i] > k) {
            return {};
        }
        ans.push_back({nums[i], nums[i+1], nums[i+2]});
    }

    return ans;
}

int main() {
    vector<int> nums = {1, 3, 4, 8, 7, 9, 3, 5, 1};
    int k = 2;
    vector<vector<int>> ans = divideArray(nums, k); 

        for (auto& group : ans) {
            for (int num : group) {
                cout << num << " ";
            }
            cout << endl;
        }

    return 0;
}
