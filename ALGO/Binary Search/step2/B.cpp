#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k;
int a[1000000];
double mid;
void import(){
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
}
bool check(double x){
    ll cnt = 0;
    for(int i = 0; i < n; i++) cnt += (ll)(a[i]/x);
    return cnt >= k;
}
double search(double left, double right){
    for(int i = 0; i < 1000; i++){
        mid = (left + right)/2;
        if (check(mid)) left = mid;
        else right = mid;
    }
    return left;
}

void solve(){
    cout << fixed << setprecision(10) << search(0,10000000);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    import();
    solve();
}
/*
    while(l <= r)     [l, r] l <= ans <= r
    while(l + 1 < r)  (l, r) l < ans < r
*/