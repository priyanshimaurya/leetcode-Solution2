#include<bits/stdc++.h>
using namespace std;
long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long res = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    res = max(res, (long long)(nums[i] - nums[j]) * nums[k]);
                }
            }
        }
        return res;
    }
int main(){
    vector<int> num={12,6,1,2,7};
    maximumTripletValue(num);
}