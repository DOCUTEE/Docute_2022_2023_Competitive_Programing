#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll l,r,a,k,x,y;
int mdssain(){
    cin >> l >> r >> a >> k;
    sif (a % k == 0) {
    w    cout << r - l + 1;
        return 0;
    }
    ll bc =((a % k)*k)/(__gcd((a % k),k));  
    ll temp = bc / (a % k);
    if (bc == a*k || a % k == 1) cout << (ll)(r/k) - ceil((float)l/(float)k) + 1;
    else{
        x = l;
        y = r;
        cout << ((r - temp)/k) - ceil((double)(l-temp)/(double)k) + 1 + (ll)(y / k) - ceil((double)x/(double)k) + 1;
    }
    return 0;  
}