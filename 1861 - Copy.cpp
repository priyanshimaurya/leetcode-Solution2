#include <iostream>
#include <string>
using namespace std;

string truncateSentence(string s, int k) {
    int count = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == ' ') {
            count++;
            if (count == k) {
                return s.substr(0, i);
            }
        }
    }
    return s; 
}

int main() {
    string s = "Hello how are you Contestant";
    int k = 4;
    cout << truncateSentence(s, k) << endl;
    return 0;
}
