#include<iostream>
using namespace std;
bool canAliceWin(int n) {
    
        if(n>10){
            return true;
        }
        else{
            return false;
        }
    
}
int main(){
    int n=12;
    if(canAliceWin(n)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}