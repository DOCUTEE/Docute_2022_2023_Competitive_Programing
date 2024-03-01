#include<bits/stdc++.h>
using namespace std;

#define int long long

int binpower(int base, int e, int mod) {
    int result = 1;
    base %= mod;
    while (e) {
        if (e & 1)
            result = (int)result * base % mod;
        base = (int)base * base % mod;
        e >>= 1;
    }
    return result;
}

bool check_composite(int n, int a, int d, int s) {
    int x = binpower(a, d, n);
    if (x == 1 || x == n - 1)
        return false;
    for (int r = 1; r < s; r++) {
        x = (int)x * x % n;
        if (x == n - 1)
            return false;
    }
    return true;
};

bool MillerRabin(int n, int iter=5) { // returns true if n is probably prime, else returns false.
    if (n < 4)
        return n == 2 || n == 3;

    int s = 0;
    int d = n - 1;
    while ((d & 1) == 0) {
        d >>= 1;
        s++;
    }

    for (int i = 0; i < iter; i++) {
        int a = 2 + rand() % (n - 3);
        if (check_composite(n, a, d, s))
            return false;
    }
    return true;
}


signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int k = 5;
    int final;
    cin >> final;
    int cnt = 0;
    for(int n = 0; n < final; n++)
        if (MillerRabin(n,k)) cnt++;
    cout << cnt;
}