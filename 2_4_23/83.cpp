#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7; 
#define loop(i,a,n) for(int i = a; i <= n; i++)
ll giaithua[1000005];
void create(){
    giaithua[0] = 1;
    loop(i,1,1000001) giaithua[i] = giaithua[i-1]*i % mod;
}
ll binpow(ll a, ll b){
    if (b == 1) return a;
    if (b == 0) return 1;
    ll temp = binpow(a,b/2);
    if (b % 2 == 1) return (((temp*temp) % mod) * a) % mod;
    else return (temp*temp) % mod;
}
ll solve(ll a, ll b){
    return (((binpow(giaithua[b],mod - 2) * binpow(giaithua[a-b],mod - 2)) % mod) *giaithua[a]) % mod; 

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long t,n,a,b;
    cin >> t;
    create();
    while (t--){
        cin >> a >> b;
        cout << solve(a,b) <<"\n";   
    }
}