#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
vector<vector<int>>adj(200005);
vector<bool>vis(200005,false);
int up;
int n,m;
void dfs(int u){
    //cout << u << " ";
    vis[u] = true;
    if(adj[u].size() != 2) up = 0;
    for(auto v: adj[u])
    {
        if(!vis[v]) dfs(v); 
    }
}
signed main(){
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
    int result = 0;
    for(int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            up =1;
            dfs(i);
            result += up;
        }
    }
    cout << result;
}