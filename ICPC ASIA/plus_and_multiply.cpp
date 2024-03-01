#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll int_max = 1e9+1;
int t;
ll n,a,b;
#define loop(i,a,n) for(int i = a; i <= n; i++)
bool solve(ll n,ll a,ll b){
    if ((n-1) % b == 0) return true;
    ll temp = a;
    while(a <= n){
        if (a == n) return true;
        a *= temp;
    } 
    return false;
}
bool build(int id, int left, int right){
    if
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while (t--){
        cin >> n >> a >> b;
        build(1,1,(n-1)/b + 1);
    }
    return 0;
}