#include<bits/stdc++.h>
using namespace std;
int largestAltitude(vector<int>& gain) {
    int maxalti=0;
    int curralti=0;
    for(int i=0;i<gain.size();i++){
        curralti+=gain[i];
        maxalti=max(maxalti,curralti);
    }
    return maxalti;
}
int main(){
    vector<int> gain={-5,1,5,0,-7};
    cout<<largestAltitude(gain);
}