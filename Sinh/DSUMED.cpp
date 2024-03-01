#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int inf = 1e18;

vector<int>par(100005);
vector<int>sz(100005);
vector<pair<int,int>>lm(100005,{inf, -inf});
int n,m;
void make_set()
{
    for(int i = 1; i <= 100000; i++)
    {
        par[i] = i;
        sz[i] = 1;
        lm[i] = {i,i};
    }
}
int find(int u)
{
    if (par[u] == u) return u;
    return par[u] = find(par[u]);
}
void uni(int u, int v)
{
    u = find(u);
    v = find(v);
    
    if (u == v) return;
    par[v] = u;
    sz[u] += sz[v];
    lm[u].first = min(lm[u].first,lm[v].first);
    lm[u].second = max(lm[u].second,lm[v].second);
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("lineup.txt", "r", stdin);
    //freopen("quang.txt", "w", stdout);
    cin >> n >> m;
    make_set();
    for(int i = 0; i < m; i++)
    {
        string temp;
        int u,v;
        cin >> temp;
        if (temp == "union") 
        {
            cin >> u >> v;
            uni(u,v);
        }
        else if (temp == "get")
            { 
                cin >> u;
                int temp = find(u);
                cout << lm[temp].first << " " << lm[temp].second << " " << sz[temp] << endl;
                //cout << find(u) << " " << find(v) << endl;
            }
            else
            {
                cin >> u >> v;
                if (find(u) == find(v)) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
    }
}