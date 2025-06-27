#include <bits/stdc++.h>
using namespace std;

int countConsistentStrings(string allowed, vector<string>& words) {
    unordered_set<char> allowedSet(allowed.begin(), allowed.end());
    int count = 0;
    for (int i = 0; i < words.size(); i++) {
        bool isConsistent = true;
        for (char c : words[i]) {
            if (allowedSet.find(c) == allowedSet.end()) {
                isConsistent = false;
                break;
            }
        }
        if (isConsistent) {
            count++;  
        }
    }
    return count;
} 
int main() {
    string allowed = "ab";
    vector<string> words = {"ad", "bd", "aaab", "baa", "badab"};
    cout << countConsistentStrings(allowed, words) << endl;
}
