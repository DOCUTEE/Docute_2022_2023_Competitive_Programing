#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int inf = 1e18;

struct edge
{
    int u;
    int v;
    int w;
};
int n,m;

vector<pair<int,int>>adj[100000];
vector<bool> used(100000);
vector<int>par(100000),sz(100000);

void prim(int u)
{
    vector<edge>F;
    int T = 0;
    used[u] = true;
    while (F.size() < n-1)
    {
        int cmp = inf;
        int x,y;
        for(int i = 1; i <= n; i++)
        if (used[i])
        {
            for(auto it: adj[i])
            {
                if (!used[it.first] && it.second < cmp)
                {
                    x = i;
                    y = it.first;
                    cmp = it.second;
                }
            }
        }
        T += cmp;
        F.push_back({x,y,cmp});
        used[y] = true;
    }
    cout << T << endl;
    for(auto it: F) cout << "("<<it.u <<"," << it.v <<") " << it.w << endl;
}
signed main()
{
    freopen("Prim.txt", "r", stdin);
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int u,v,w;
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    int start;
    cin >> start;
    prim(start);
}