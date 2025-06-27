#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minCostToMakeEqual(vector<int>& nums) {
    sort(nums.begin(), nums.end());  
    int median = nums[nums.size() / 2];  
    int cost = 0;

    for (int num : nums) {
        cost += abs(median-num);
    }
    return cost;
}

int main() {
    vector<int> nums = {1, 2, 3, 12};  
    cout << "Minimum cost to make elements equal: " << minCostToMakeEqual(nums) << endl;
    return 0;
}
