#include<iostream>
using namespace std;
int getFinalState(int num[],int k,int multilyer){

    int size=sizeof(num)/sizeof(num[0]);
    for(int i=0;i<size;i++){
        for(int j=0;j<k;j++){
        cout<<num[j]*multilyer<<" ";
    }
    cout<<endl;
    }
    // cout<<endl;
}
int main(){
    int num[]={2,1,3,5,6};
    int k=5;
    int multi=2;
    getFinalState(num,k,multi);
}