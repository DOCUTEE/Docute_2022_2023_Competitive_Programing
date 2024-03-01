#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define endl '\n'

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int>a(n);
    vector<int>dp(n,1);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if (a[j] < a[i])
            {
                string t = to_string(a[j]+a[i]);
                string s = t;
                reverse(s.begin(),s.end());
                if (s == t) dp[i] = max(dp[i],dp[j]+1);
            }
        }
    }
    int cmp = *max_element(dp.begin(),dp.end());
    if (cmp == 1) cout << -1;
    else cout << cmp;
}