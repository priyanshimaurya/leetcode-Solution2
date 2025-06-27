#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int missingInteger(vector<int> nums) {
    sort(nums.begin(), nums.end()); 
    int smallestMissing = 1; 

    for (int num : nums) {
        if (num == smallestMissing) {
            smallestMissing++; 
        }
    }

    return smallestMissing;
}

int main() {
    vector<int> nums = {1, 2, 3, 2, 5};
    int missing = missingInteger(nums);
    cout << "The first missing positive integer is: " << missing << endl;
    return 0;
}