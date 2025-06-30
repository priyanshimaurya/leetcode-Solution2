#include <bits/stdc++.h>
using namespace std;

int minNumber(vector<int>& nums1, vector<int>& nums2) {
    int ans = 100; 
    for (int i = 0; i < nums1.size(); ++i) {
        for (int j = 0; j < nums2.size(); ++j) {
            if (nums1[i] == nums2[j]) {
                ans = min(ans, nums1[i]);
            }
        }
    }
    if (ans != 100) return ans;
    int min1 = *min_element(nums1.begin(), nums1.end());
    int min2 = *min_element(nums2.begin(), nums2.end());
    return min(min1 * 10 + min2, min2 * 10 + min1);
}

int main() {
    vector<int> nums1 = {6,4,3,7,2,1,8,5};
    vector<int> nums2 = {6,8,5,3,1,7,4,2};
    int result = minNumber(nums1, nums2);
    cout << result << endl; 
    return 0;
}