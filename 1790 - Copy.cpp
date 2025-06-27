#include<iostream>
using namespace std;
bool areAlmostEqual(string s1, string s2) {
    bool ifequal=false;
    for(int i=0;i<s1.size();i++){
        for(int j=0; j<s2.size();j++){
            if(s1[i]==s2[j]){
                swap(s2[j],s2[i]);
                ifequal=true;
                return true;
                break;
            }
        }
    }
    if(!ifequal){ 
        return false;
    }
}
int main(){
    string s1="bank";
    string s2="kanb";
    cout<<areAlmostEqual(s1,s2)<<endl;
    return 0;
}