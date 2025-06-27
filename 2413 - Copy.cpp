#include<iostream>
using namespace std;
int smallestEvenMultiple(int n) {
    if(n%2==0){
        return n;
    }
    return n*2;
}
int main(){
    int n=5;
    cout<<smallestEvenMultiple(n);
}