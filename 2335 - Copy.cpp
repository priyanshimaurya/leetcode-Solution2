#include <bits/stdc++.h>
using namespace std;

int fillCups(vector<int>& amount) {
    int sum = amount[0] + amount[1] + amount[2];
    int mx = max({amount[0], amount[1], amount[2]});
    return max(mx, (sum + 1) / 2);
}

int main() {
    vector<int> amount = {5, 0, 0};
    cout << fillCups(amount) << endl;
    return 0;
}