#include <iostream>
#include <vector>
using namespace std;

int sumOfUnique(vector<int> nums) {
    int sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        bool isUnique = true;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[i] == nums[j] && i != j) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            sum += nums[i];
        }
    }

    return sum;
}

int main() {
    vector<int> nums = {1, 2, 3, 2};
    cout << sumOfUnique(nums) << endl; 
    return 0;
}