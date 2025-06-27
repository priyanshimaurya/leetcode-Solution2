#include <iostream>
#include <string>
using namespace std;

string removeStars(string s) {
    string result;
    for (char c : s) {
        if (c == '*') {
            if (!result.empty()) {
                result.pop_back(); 
            }
        } else {
            result += c; 
        }
    }
    return result; 
}

int main() {
    string s = "l*e*e*t*c*o**de";
    string result = removeStars(s);
    cout << result << endl; 
    return 0;
}
