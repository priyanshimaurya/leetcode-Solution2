#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
char repeatedCharacter(string s) {
    string s1;
    char ans;
    for(int i=0;i<s.size();i++){
        if(s1.find(s[i])!=string::npos){
            ans=s[i];
            break;
        }
        s1+=s[i];
    }       
    return ans;
}
int main(){
    string s="abccbaacz";
    cout<<repeatedCharacter(s)<<endl;
    return 0;
}