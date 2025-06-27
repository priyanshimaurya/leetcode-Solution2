#include<iostream>
using namespace std;

int divisorSubstrings(int num[], int n, int k) {
    int count = 0;
    
    for(int i = 0; i <= n - k; i++) {
        int curr = 0;
        
        for(int j = 0; j < k; j++) {
            curr = curr * 10 + num[i + j];
        }
        
        if(curr % k == 0) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int num[] = {2, 4, 0};
    int k = 2;
    int n = sizeof(num) / sizeof(num[0]);  
    
    cout << divisorSubstrings(num, n, k);
    return 0;
}
