#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double lld;

ll l, r, a, k, cnt;

int main() {
    cin >> l >> r >> a >> k;
    l *= a;
    r *= a;
    ll d = (a * k)/__gcd(a, k);
    ll right = floor((double) r / (double) d), left = ceil((double) l/(double) d);
    cout << right - left + 1;
    return 0;
}