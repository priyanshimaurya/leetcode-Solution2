#include <iostream>
#include <vector>
using namespace std;

int averageValue(vector<int>& nums) {
    int sum = 0;
    int count = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] % 2 == 0 && nums[i] % 3 == 0) {
            sum += nums[i];
            count++;
        }
    }

    if (count == 0) {
        return 0;
    }

    int res = sum / count; 
    cout << res << endl; 
    return res; 
}

int main() {
    vector<int> nums = {1,2,4,7,10}; 
    averageValue(nums);
    return 0;
}
