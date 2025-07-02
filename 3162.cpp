#include<bits/stdc++.h>
using namespace std;
int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
    int count=0;
    for(int i=0;i<nums1.size();i++){
        for(int j=0;j<nums2.size();j++){
            if(nums1[i] % (nums2[j] * k) == 0){
                count++;
            }
        }
    }        
    return count;
}
int main(){
    vector<int> n1={1,3,4};
    vector<int> n2={1,3,4};
    int k=1;
    int result = numberOfPairs(n1, n2, k);
    cout << result << endl; 
}