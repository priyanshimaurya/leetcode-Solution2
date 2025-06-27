#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
double trimMean(vector<int>& arr) {
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int cut=n*0.05;
    int sum=0;
    for(int i=cut;i<n-cut;i++){
        sum+=arr[i];
    }
    double means=static_cast<double>(sum/(n-2*cut));
    return means;
}
int main(){
    vector<int>arr={1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3};
    cout<<trimMean(arr);
}