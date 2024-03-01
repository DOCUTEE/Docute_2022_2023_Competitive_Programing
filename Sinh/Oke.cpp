#include<bits/stdc++.h>
using namespace std;
 
//#define int long long 
#define endl '\n'
 
int n,m;
const int inf = 1e9;
vector<pair<int,int>> adj[3000005];
vector<int> dist(3000005, inf);
void PhuongNgan(int x){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> wait;
    dist[x] = 0;
    wait.push({x,0});
    int u,v,d,w;
    while(!wait.empty() && u != n){
        pair<int,int>temp = wait.top();
        wait.pop();
        u = temp.first;
        d = temp.second;
        if (d > dist[u]) continue;
        for(auto it: adj[u]){
            v = it.first;
            w = it.second;
            if(dist[v] > dist[u]+w){
                dist[v] = dist[u]+w;
                wait.push({v, dist[v]});
            }
        }
    }
    //for(int i = 1; i <= n; i++) cout << dist[i] << " ";
}
 
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    int u,v,w;
    for(int i = 0; i < m; i++){
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    PhuongNgan(1);
    cout << (dist[n] >= inf ? -1 : dist[n]);
}