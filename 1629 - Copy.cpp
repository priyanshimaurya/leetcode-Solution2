#include<bits/stdc++.h>
using namespace std;
char slowestKey(vector<int>& releaseTimes, string keysPressed) {
    int n= releaseTimes.size();
    int maxTime = releaseTimes[0];
    char slowest = keysPressed[0];
    for(int i=1;i<n;i++){
        int time= releaseTimes[i] -releaseTimes[i-1];
        if(time>maxTime || (time==maxTime &&keysPressed[i]>slowest)){
            maxTime = time;
            slowest = keysPressed[i];
        }
        
    }        
    return slowest;
}
int main() {
    vector<int> releaseTimes = {9, 29, 49, 50};
    string keysPressed = "cbcd";
    cout << slowestKey(releaseTimes, keysPressed) << endl; 
    return 0;
}