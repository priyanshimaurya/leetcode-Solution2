#include <bits/stdc++.h>
using namespace std;

string removeDigit(string number, char digit) {
    string maxResult = "";

    for (int i = 0; i < number.size(); ++i) {
        if (number[i] == digit) {
            string temp = number.substr(0, i) + number.substr(i + 1);
            maxResult = max(maxResult, temp);
        }
    }

    return maxResult;
}

int main() {
    string number = "551";
    char digit = '5';
    cout << removeDigit(number, digit);  
}
