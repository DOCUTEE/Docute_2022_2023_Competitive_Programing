#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int inf = 1e18;
int n, t1, t2;
int a[100][100];
bool vis[100];
int result = inf;
void dfs(int u, int cnt, int total)
{
    if (cnt == n)
    {
        if (u == t2) result = min(total, result);
        return;
    }
    if (cnt != n && u == t2) return;
    for(int v = 0; v < n; v++)
    {
        if (!vis[v] && u != v)
        {
            vis[v] = true;
            dfs(v, cnt+1, total + a[u][v]);
            vis[v] = false;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> t1 >> t2;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    vis[t1] = true;
    dfs(t1, 1, 0);
    cout << result;
}