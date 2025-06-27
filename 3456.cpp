#include<bits/stdc++.h>
using namespace std;
bool hasSpecialSubstring(string s, int k) {
    int count = 1;
        char prev = s[0];
        for(int i = 1, n = s.length(); i < n; ++i){
            if (s[i] == prev) ++count;
            else{
                if(count == k) return true;
                count = 1;
                prev = s[i];
            }
        }
        return count == k;
    }
int main(){
    string s="abc";
    int k=2;
    cout<<hasSpecialSubstring(s,k);
}