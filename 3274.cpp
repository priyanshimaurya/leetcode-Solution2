#include<bits/stdc++.h>
using namespace std;
bool checkTwoChessboards(string coordinate1, string coordinate2) {
    return (coordinate1[0]+coordinate1[1])%2==(coordinate2[0]+coordinate2[1])%2;        
}
int main(){
    string co1="a1", co2="c3";
    if(checkTwoChessboards(co1,co2)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}