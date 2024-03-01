#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int inf = 1e18;
int n,m,start;
vector<int>adj[100000];
vector<bool>visit(100000);
void dfs(int u)
{
    visit[u] = true;
    for(auto v: adj[u])
    {
        if (!visit[v]) 
        {
            cout << "(" << u << " -> " << v << ")" << endl;
            dfs(v);
        }
    }
}
signed main()
{
    freopen("DFS.txt", "r", stdin);
    cin >> n >> m >> start;
    for(int i = 0; i < m; i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 1; i <= n; i++)
    sort(adj[i].begin(), adj[i].end());
    cout << "Cay khung la: " << endl;
    dfs(start);
    return 0;
}