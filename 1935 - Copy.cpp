#include <iostream>
#include <string>
using namespace std;

int canBeTypedWords(string text, string brokenLetters) {
    int count = 0;
    bool canType = true;

    for (int i = 0; i <= text.size(); i++) {
        if (i == text.size() || text[i] == ' ') {
            if (canType) {
                count++;
            }
            canType = true;
        } else {
            for (int j = 0; j < brokenLetters.size(); j++) {
                if (text[i] == brokenLetters[j]) {
                    canType = false;
                    count<<count;
                }
            }
        }
    }
    return -1;
} 
int main() {
    string text = "hello world";
    string brokenLetters = "ad";
    cout << canBeTypedWords(text, brokenLetters);
    return 0;
}