#include<iostream>

using namespace std;
    int minimumChairs(string s) {
        int count = 0;
        int maxChairs = 0;

        for (char c : s) {
            if (c == 'E') {
                count++;
            } else if (c == 'L') {
                count--;
            }
            
            if (count > maxChairs) {
                maxChairs = count;
            }

            if (count < 0) {
                count = 0;
            }
        }

        return maxChairs;
    }

int main(){
    string s="ELEELEELLL";
    minimumChairs(s);
}