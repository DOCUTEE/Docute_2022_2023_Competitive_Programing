include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll lcm(ll a, ll b) {
    return (a * b)/__gcd(a, b);
}

ll l, r, a, k, lef, rig;

int main () {
    cin >> l >> r >> a >> k;
    lef = (ceil((double)(l*a)/(double)lcm(a, k))) * lcm(a, k);
    rig = (floor((double)(r*a)/(double)lcm(a, k))) * lcm(a, k);
    cout << (rig - lef)/lcm(a, k) + 1;
    return 0;
}