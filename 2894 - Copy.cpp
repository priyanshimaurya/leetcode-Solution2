#include<iostream>
using namespace std;
int differenceOfSums(int n, int m) {
    int sum1=0;
    int sum2=0;
    for(int i=1;i<=n;i++){
        if(i%m!=0){
            sum1+=i;
        }
        else{
            // sum1+=i;
            sum2+=i;
        }
    } 
    int res=sum1-sum2;
    return res;
}
int main(){
    int n=10,m=3;
    cout<<differenceOfSums(n,m);
}