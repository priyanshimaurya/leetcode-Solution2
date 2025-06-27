#include<bits/stdc++.h>
using namespace std;
bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    return reduce(word1.cbegin(),word1.cend())==reduce(word2.cbegin(),word2.cend());       
}
int main(){
    vector<string>word1={"a", "cb"};
    vector<string>word2={"ab", "c"};
    if(arrayStringsAreEqual(word1,word2)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}