#include<iostream>
#include<vector>
using namespace std;
int sumOddLengthSubarrays(vector<int>& arr) {
    int sum=0;
    int n=arr.size();

    for(int i=0;i<n;i++){
        for(int len=1 ;len<=n-i;len+=2){
           for(int j=i;j<i+len;j++){
            sum+=arr[j];
           }
        }
    }
   return sum;
}
int main(){
    vector<int> arr={1,4,2,5,3};
    cout<<sumOddLengthSubarrays(arr);
}