#include<bits/stdc++.h>
using namespace std;
int countAsterisks(string s) {
    int ans=0;
    int x=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='|'){
            if(x==0){
                x=1;
            }
            else{
                x=0;
            }
        }
        else if(s[i]=='*' && x==0){
            ans++;
        }
    }     
    return ans;  
}
int main(){
    string s="l|*e*et|c**o|*de|";
    cout<<countAsterisks(s);
}