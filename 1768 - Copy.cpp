#include <iostream>
#include <string>
using namespace std;

string mergeAlternately(string word1, string word2) {
    string result;
    int i = 0, j = 0;
    while (i < word1.size() && j < word2.size()) {
        result += word1[i++];
        result += word2[j++];
    }

    while (i < word1.size()) {
        result += word1[i++];
    }

    while (j < word2.size()) {
        result += word2[j++];
    }

    return result;
}

int main() {
    string word1 = "abcd";
    string word2 = "efgh";
    string merged = mergeAlternately(word1, word2);
    cout << merged << endl; 
}
