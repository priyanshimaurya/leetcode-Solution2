#include<bits/stdc++.h>
using namespace std;
vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
    vector<string> res;
    for(int i=0;i<words.size();i++){
        if(words[i].find(separator)==string :: npos){
            res.push_back(words[i]);
        }
        else{
            stringstream ss(words[i]);
            string word;
            while(getline(ss,word,separator)){
                if(!word.empty()){
                    res.push_back(word);
                }
            }
        }
    }    
    return res;    
}
int main() {
    vector<string> words = {"one.two.three", "four.five", "six"};
    char separator = '.';
    vector<string> result = splitWordsBySeparator(words, separator);
    for (const string& word : result) {
        cout << word << " ";
    }
    cout << endl;
    return 0;
}