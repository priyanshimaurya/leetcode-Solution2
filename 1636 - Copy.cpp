#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> frequencySort(vector<int>& nums) {

    sort(nums.begin(), nums.end(), [&](int a, int b) {
        int freqA = count(nums.begin(), nums.end(), a);
        int freqB = count(nums.begin(), nums.end(), b);

        return freqA == freqB ? a > b : freqA < freqB;
    });

    return nums;
}

int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    vector<int> result = frequencySort(nums);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
