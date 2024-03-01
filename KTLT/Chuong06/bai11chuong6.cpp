#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int inf = 1e18;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int>dp(n+2),a(n+2),bf(n+2);
    a[0] = -inf;
    a[n+1] = inf;
    dp[0] = 1;
    dp[n+1] = 1;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 0; i <= n+1;i++) bf[i] = i; 
    for(int i = 1; i <= n+1; i++)
    {
        for(int j = 0; j < i; j++)
        if (a[i] >= a[j] && dp[i] < dp[j]+1) 
        {
            dp[i] = dp[j]+1;
            bf[i] = j;
        }
    }
    cout << dp[n+1]-2 << endl;
    int j = n+1;
    vector<int>res;
    for(int i = dp[n+1]; i >= 1; i--)
    {
        while(dp[j] != i)
        {
            j--;
        }
        if (abs(a[j]) != inf) res.push_back(a[j]);
    }
    reverse(res.begin(), res.end());
    for(int x: res) cout << x << " ";
}