#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int n,m;
vector<int>adj(100005);
vector<int>vis(100005);
bool check = false;
void dfs(int u)
{
    
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
    for(int i = 1; i <= n; i++)
    {
        if (!vis[i]) dfs(i);
    }
}