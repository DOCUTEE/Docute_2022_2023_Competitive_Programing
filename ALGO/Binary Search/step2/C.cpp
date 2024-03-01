#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll inf = 1e9;
ll n,x,y;
void import(){
    cin >> n >> x >> y;
    n--;
}
bool check(ll t){
    return (t/x)+(t/y) >= n;
}
ll search(ll left, ll right){
    if (right - left <= 1) return (check(left)) ? left : right;
    ll mid = (left + right)/2;
    if (check(mid)) return search(left,mid);
    else return search(mid,right);
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    import();
    cout << search(0,inf) + min(x,y);
    return 0;
}