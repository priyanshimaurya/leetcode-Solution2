#include<iostream>
using namespace std;
int findPermutationDifference(string s, string t) {
    int ns = s.length(), cnt = 0;
    int nt = t.length();
    for(int i = 0; i < ns; i++) {
        for(int j = 0; j < nt; j++) {
            if(s[i] == t[j]) {
                cnt += abs(i - j);
            }
        } 
    }
    return cnt;
}

int main(){
    string s="abcde",t="edbac";
    cout<<findPermutationDifference(s,t);
}