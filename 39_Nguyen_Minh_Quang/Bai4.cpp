#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int inf = 1e18;

int n,m;
vector<pair<int,int>>adj[100000];
vector<int>d(100000,inf);
vector<int>visit(100000,false);
vector<int>truoc(100000);
void dijkstra(int u)
{
    d[u] = 0;
    bool check = true;
    truoc[u] = u;
    while(check)
    {
        check = false;
        int cmp = inf;
        for(int i = 1; i <= n; i++)
        if (!visit[i] && d[i] < cmp)
        {
            u = i;
            check = true;
            cmp = d[i];
        }
        visit[u] = true;
        for(auto x: adj[u])
        {
            if (d[x.first]  > d[u] + x.second)
            {
                d[x.first] = d[u] + x.second;
                truoc[x.first] = u;
            }
        }
    }
}
vector<int> truyvet(int v)
{
    vector<int>result = {v};
    while(truoc[v] != v)
    {
        v = truoc[v];
        result.push_back(v);
    }
    reverse(result.begin(), result.end());
    return result;
}
signed main()
{
    freopen("dijkstra.txt", "r",stdin);
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int u,v,w;
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
    }
    int u,v;
    cin >> u >> v;
    dijkstra(u);
    if (d[v] < inf){
        cout << "Tong do dai duong di ngan nhat la: " << d[v] << endl;
        vector<int> result = truyvet(v);
        cout << "Thu tu di la: ";
        for(auto x: result) cout << x << " "; 
    }
    else cout << "Khong di den duoc !";
    return 0;

}