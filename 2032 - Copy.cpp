#include <bits/stdc++.h>
using namespace std;

vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
    bool a[101] = {0};
    bool b[101] = {0};
    bool c[101] = {0};

    for (int num : nums1) {
        a[num] = true;
    }
    for (int num : nums2) {
        b[num] = true;
    }
    for (int num : nums3) {
        c[num] = true;
    }

    vector<int> res;
    for (int i = 1; i <= 100; i++) {
        int count = a[i] + b[i] + c[i];
        if (count >= 2) res.push_back(i);
    }

    return res;
}

int main() {
    vector<int> n1 = {1,1,3,2}, n2 = {2,3}, n3 = {3};
    vector<int> res = twoOutOfThree(n1, n2, n3);

    for (int val : res) cout << val << " ";
    cout << endl;
}
