#include<bits/stdc++.h>
using namespace std;
    long long comb(int n, int r) {
        if (r > n || r < 0) return 0;
        return 1LL * n * (n - 1) / 2;
    }
    long long distributeCandies(int n, int limit) {
        long long total = comb(n + 2, 2);
        for (int i = 0; i < 3; ++i) {
            if (n - (limit + 1) >= 0)
                total -= comb(n - (limit + 1) + 2, 2);
            n -= limit + 1;
        }
        if (n >= 0)
            total += comb(n + 2, 2);

        return total;
    }

int main(){
    int n=5,limit=2;
    cout<<distributeCandies(n,limit);
}