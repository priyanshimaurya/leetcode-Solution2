#include<bits/stdc++.h>
using namespace std;
int secondHighest(string s) {
        int first=-1, second=-1;
        for(char c:s){
            if(isdigit(c)){
                int dig=c-'0';
                if(dig>first){
                    second=first;
                    first=dig;
                }
                else if(dig>second && dig<first){
                    second=dig;
                }
                else if(dig==first){
                    continue;
                }
            }
        }
        return second;
}
int main(){
    string s="abc1111";
    cout<<secondHighest(s);
}