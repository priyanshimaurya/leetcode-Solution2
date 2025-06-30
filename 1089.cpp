#include<bits/stdc++.h>
using namespace std;
void duplicatecounteros(vector<int>& arr) {
    int i=0;
    int n = arr.size();
    while(i<n){
        if(arr[i]==0){
            arr.insert(arr.begin()+i,0);
            i+=2;
        }
        else{
            i++;
        }
    }
    arr.resize(n);
}
int main() {
    vector<int> arr = {1,0,2,3,0,4,5,0};
    duplicatecounteros(arr);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
