#include<bits/stdc++.h>
using namespace std;;
vector<int> findPeaks(vector<int> mountain) {
    vector<int> ans;
    for(int i=0;i<mountain.size();i++){
        if(mountain[i]>mountain[i-1] && mountain[i]>mountain[i+1]){
            ans.push_back(mountain[i]);
        }
    }        
    return ans;
}
int main(){
    vector<int> mountain={1,4,3,8,5};
    cout<<findPeaks(mountain);
}