#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define endl '\n'

const int inf = 1e18;

bool palin(int x)
{
    int y = 0;
    while (x > y)
    {
        y = y*10 + x % 10;
        x /= 10;
    }
    if (x == y) return true;
    if (x < y && x == y/10) return true;
    return false;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int>a(n+2);
    vector<int>dp(n+2);
    for(int i = 1; i <= n; i++) cin >> a[i];
    a[0] = -inf;
    a[n+1] = inf;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j < i; j++)
        {
            if (a[j] < a[i] && dp[j] >= dp[i] && palin(a[i]+a[j])) dp[i] = dp[j] + 1;
        }
    }
    int cmp = 0;
    for(int i = 1; i <= n; i++) cmp = max(cmp,dp[i]);
    //for(auto x: dp) cout << x << " ";
    if (cmp < 1) cout << -1;
    else cout << cmp+1;
}