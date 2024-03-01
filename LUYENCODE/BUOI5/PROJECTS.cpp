#include <bits/stdc++.h>
using namespace std; 
#define loop(i,a,n) for(int i = a; i <= n; i++)
int c[30],p[30],dp[30][30005],S,n;
int max(int a, int b){
    return a > b ? a : b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> S;
    loop(i,1,n) cin >> c[i];
    loop(i,1,n) cin >> p[i];
    loop(i,1,n) loop(j,1,S)  
        if (c[i] <= j) dp[i][j] = max(dp[i-1][j], dp[i-1][j - c[i]] + p[i]);
        else dp[i][j] = dp[i-1][j];
    cout << dp[n][S]; 
}