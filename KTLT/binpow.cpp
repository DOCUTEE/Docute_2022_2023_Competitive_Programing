#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define endl '\n'

const int inf = 1e18;
int n,m,u,v;
int ans = 0;
void solve()
{
    cin >> n >> m;
    vector<set<int>>adj(n+1);
    vector<bool>have(n+1,false);
    for(int i = 0; i < m; i++)
    {
        cin >> u >> v;
        adj[u].insert(v);
        adj[v].insert(u);
        if (max(u,v) - min(u,v) == 2) have[max(u,v)] = true;
    }
    ans = 0;
    for(int i = 1; i < n; i++)
    if (adj[i].count(i+1) == 0 && adj[1].count(i+1) == 0 && have[i+1] == false){
        ans++;
    }
    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;  
    cin >> t;
    while(t--)
    {
        solve();
    }
}

