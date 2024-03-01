#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define endl '\n'
vector<vector<int>>a(104, vector<int>(104,0));
vector<vector<int>>dp(104, vector<int>(104,0));
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);   
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            dp[i][j] = (max(dp[i-1][j],dp[i][j-1]) << 1) | a[i][j];
        }
    }
    cout << dp[n][n];
}