#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i, a, n) for (int i = 0; i < n; i++)
vector<int> save[200005];
ll a[200005], pos, n, k;
ll best, dp[200005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    fill(dp, dp + n, 1e18);
    loop(i, 0, n)
    {
        cin >> a[i];
        best = max(best, a[i]);
        if (a[i] == 1) dp[i] = 0;
        save[a[i]].push_back(i);
    }
    loop(i, 1, best)
    {
        for (auto x : save[i])
        {
            pos = upper_bound(save[i + 1].begin(), save[i + 1].end(), x) - save[i + 1].begin();
            if (pos == save[i+1].size()) dp[save[i+1][0]] = min(dp[save[i+1][0]],dp[x] + (save[i + 1][0] - x + n) % n);
            else dp[save[i + 1][pos]] = min(dp[save[i + 1][pos]], dp[x] + (save[i + 1][pos] - x + n) % n);
        }
    }
    ll result = 1e18;
    //loop (i,0,n) cout << dp[i] << " ";
    loop(i, 0, n) if (a[i] == k) result = min(result, dp[i]);
    cout << result + 1;
}