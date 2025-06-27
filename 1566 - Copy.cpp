#include <bits/stdc++.h>
using namespace std;

bool containsPattern(vector<int>& arr, int m, int k) {
    int n = arr.size();
    for (int i = 0; i <= n - m * k; i++) {
        bool match = true;
        for (int j = 0; j < m * k; j++) {
            if (arr[i + j] != arr[i + (j % m)]) {
                match = false;
                break;
            }
        }
        if (match) return true;
    }
    return false;
}

int main() {
    vector<int> arr = {1,2,1,2,1,3};
    int m = 2, k = 3;
    cout << (containsPattern(arr, m, k) ? "true" : "false");
}