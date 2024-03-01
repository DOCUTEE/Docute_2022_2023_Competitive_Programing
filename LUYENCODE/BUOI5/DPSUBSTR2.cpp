#include <bits/stdc++.h>
typedef long long ll;
#define loop(i,a,n) for(ll i=a ; i<n ; i++)
ll max(ll a,ll b){
    return a > b ? a : b;
}
ll dp[2005][2005];
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string txta,txtb,res;
    cin >> txta;
    cin >> txtb;
    ll n = txta.size(), m = txtb.size();
    txta = " "+txta;
    txtb = " "+txtb;  
    loop(i,1,n+1)
        loop(j,1,m+1)
        if (txta[i] == txtb[j]) dp[i][j] = dp[i-1][j-1] + 1;
        else dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
    ll i = n;
    ll j = m;  
    while (i > 0 && j > 0){
        if (txta[i] == txtb[j]) {
            res = txta[i] + res;
            i--;
            j--;
        }
        else if (dp[i][j-1] >= dp[i-1][j]) j--;
            else i--; 
    }
    cout << res;
}