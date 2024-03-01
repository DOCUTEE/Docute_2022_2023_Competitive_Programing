#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
#define loop(i,a,n) for (ll i = a; i <= n; i++)
ll n;
vector<ll>bin; 
void multiply(ll F[2][2], ll M[2][2]){
        ll x = F[0][0]*M[0][0] + F[0][1]*M[1][0];
        ll y = F[0][0]*M[0][1] + F[0][1]*M[1][1];
        ll z = F[1][0]*M[0][0] + F[1][1]*M[1][0];
        ll t = F[1][0]*M[0][1] + F[1][1]*M[1][1]; 
        F[0][0] = x % mod;
        F[0][1] = y % mod;
        F[1][0] = z % mod; 
        F[1][1] = t % mod;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    n--;
    ll F[2][2] = {{1,1},{1,0}};
    if (n > 1){
    while (n != 1){
        bin.push_back(n % 2);
        n /= 2;
    }
    for(ll i = bin.size() - 1; i >= 0; i--){
        multiply(F,F);
        ll M[2][2] = {{1,1},{1,0}};
        if (bin[i] == 1) multiply(F,M);
    }
    cout << F[0][0];
    }
    else if (n == 1) cout << 1;
        else cout << 0;
    
    return 0;
}