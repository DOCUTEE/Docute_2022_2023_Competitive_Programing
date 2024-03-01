#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
#define loop(i,a,n) for(ll i = a; i <= n; i++)
ll ans = 1,cmp,a[500005],check[500005],dem,n;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    loop(i,1,n) cin >> a[i];
    loop(i,1,n) check[i] = max(check[i-1],a[i]);
    cmp = -1;
    loop(i,1,n)
    if (cmp != check[i]) {
        ans = (ans*(dem+1)) % mod;
        dem = 1;
        cmp = check[i];
    }
    else dem++;
    cout << ans; 
}