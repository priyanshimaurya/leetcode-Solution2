#include<bits/stdc++.h>
using namespace std;
int countTestedDevices(vector<int>& batteryPercentages) {
    int test=0;
    for(int i=0;i<batteryPercentages.size();i++){
        if(batteryPercentages[i]>test){
            test++;
        }
    }        
    return test;
}
int main(){
    vector<int> batteryPercentage={1,1,2,1,3};
    cout<<countTestedDevices(batteryPercentage);
}