#include <bits/stdc++.h>
using namespace std;

long long countSubarrays(vector<int>& nums, long long k) {
    long long sum = 0, ans = 0;
    int n = nums.size();
    int left = 0;

    for (int i = 0; i < n; i++) {
        sum += nums[i];
        while (sum * (i - left + 1) >= k) {
            sum -= nums[left];
            left++;
        }

        ans += (i - left + 1);
    }

    return ans;
}

int main() {
    vector<int> nums = {2, 1, 4, 3, 5};
    long long k = 10;
    cout << countSubarrays(nums, k) << endl; 
    return 0;
}