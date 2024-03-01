#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int inf = 1e18;

int n,k;
vector<int>a(25);
int res = 0;
void solve(int s, int i)
{
    if (s % k == 0) res = max(res, s);
    if (i == n) return;
    solve(s, i + 1);
    solve(s+a[i],i+1);
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i];
    solve(0,0);
    cout << res;
}