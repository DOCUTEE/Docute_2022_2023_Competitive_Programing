#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
const int inf = 1e18;

int n,m;
vector<int>adj[200005];
vector<int>vis(200005);
bool check = true;
void dfs(int u)
{
    vis[u] = true;
    if (adj[u].size() != 2) check = false;
    for(auto v: adj[u])
    {
        if (!vis[v]) dfs(v);
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i = 0; i < m; i++) 
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            check = true;
            dfs(i);
            if (check == true) cnt++;
        }
    }
    cout << cnt << endl;
}