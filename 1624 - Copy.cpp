#include<bits/stdc++.h>
using namespace std;
int maxLengthBetweenEqualCharacters(string s) {
    int ans=-1;
    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j]){
                ans=max(ans,j-i-1);
            }
        }
    }        
    return ans;
}
int main(){
    string s="abca";
    cout<<maxLengthBetweenEqualCharacters(s);
}