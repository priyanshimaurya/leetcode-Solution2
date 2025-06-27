#include<iostream>
using namespace std;
int totalMoney(int n) {
    int sum = 0;
    int fullWeeks = n / 7;  
    int extraDays = n % 7;
    
    sum += fullWeeks * 28;  
    for (int i = 0; i < extraDays; i++) {
        sum += fullWeeks + i + 1;  
    }
    return sum;
}
int main() {
    int n = 20;
    cout << totalMoney(n) << endl;  
    return 0;
}
