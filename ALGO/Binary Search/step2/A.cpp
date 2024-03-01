#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a,b;
void import(){
    cin >> a >> b >> n;
}
bool check(ll x){
    return (x/a)*(x/b) >= n;
}
ll search(ll left, ll right){
    if (right - left <= 1) return ((left/a)*(left/b) >= n) ? left : right; 
    ll mid = (left + right)/2;
    if (check(mid)) return search(left, mid);
    else return search(mid, right);  
}
void solve(){
    ll right = 1;
    while (!check(right)) right *= 2;
    ll result = search(right/2,right);
    cout << result;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    import();
    solve();
}