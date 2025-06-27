#include<bits/stdc++.h>
using namespace std;
int maxContainers(int n, int w, int maxWeight) {    
    return min((n*n*w)/w, maxWeight/w);
}
int main() {
    int n = 2; 
    int w = 3;
    int maxWeight = 15; 
    cout << maxContainers(n, w, maxWeight) << endl; 
    return 0;
}