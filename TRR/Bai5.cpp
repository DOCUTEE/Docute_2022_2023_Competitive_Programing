#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int inf = 1e18;


int n,m;

struct edge
{
    int u;
    int v;
    int w;
};
vector<edge>adj;
vector<bool> visit(100000);
vector<int>par(100000),sz(100000);

bool compare(edge a, edge b)
{
    return a.w < b.w;
}
void make_set()
{
    for(int i = 1; i <= n; i++)
    {
        par[i] = i;
        sz[i] = 1;
    }
}
int Find(int v)
{
    if (v == par[v]) return v;
    return par[v] = Find(par[v]);
}
void Union(int u, int v)
{
    int a = Find(u);
    int b = Find(v);
    if (a != b)
    {
        if (sz[a] <= sz[b])
        {
            par[a] = b;
            sz[b] += sz[a];
        }
        else 
        {
            par[b] = a;
            sz[a] += sz[b];
        }
    }
}
signed main()
{
    freopen("Kruskal.txt", "r", stdin);
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int u,v,w;
        cin >> u >> v >> w;
        adj.push_back({u,v,w});
    }
    int T = 0;
    make_set();
    sort(adj.begin(),adj.end(),compare);
    for(int i = 0; i < adj.size(); i++)
    {
        if (Find(adj[i].u) != Find(adj[i].v))
        {
            cout << "(" << adj[i].u << "," << adj[i].v << ") " << adj[i].w << endl;
            T += adj[i].w;
            Union(Find(adj[i].u), Find(adj[i].v));  
        }
    }
    cout <<"Tong trong so la: "<< T << endl;
}