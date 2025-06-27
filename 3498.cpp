#include<bits/stdc++.h>
using namespace std;

int reverseDegree(string s) {
    int sum = 0;
    for(char c : s) {
        int pos = tolower(c) - 'a' + 1;   
        int revPos = 27 - pos;             
        sum += pos * revPos;
    }
    return sum;
}

int main(){
    string s = "abc";
    cout << reverseDegree(s) << endl; 
}
