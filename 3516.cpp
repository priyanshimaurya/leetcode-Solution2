#include<bits/stdc++.h>
using namespace std;
int findClosest(int x, int y, int z) {
    if(abs(z-x)<abs(z-y)){
        return 1;
    }
    else if(abs(z-y) <abs(z-x)){
        return 2;
    }
    return 0;
}
int main(){
    int x=2,y=7,z=4;
    cout<<findClosest(x,y,z);
}
