#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int n,m,u,v;
vector<vector<int>>adj(105); // Danh sách kề để lưu các để kề với đỉnh u
vector<bool>vis(1000000,false); // mảng đánh dấu xem đã thăm đỉnh đó hay chưa
void bfs(int start){
    queue<int>wait; // Hàng đợi 
    wait.push(start);
    vis[start] = true;
    cout << start << endl;
    while(!wait.empty()){
        u = wait.front();
        wait.pop();
        for(auto v: adj[u])
        {
            if (!vis[v])
            {
                wait.push(v);
                vis[v] = true;
                cout << v << endl;
            }
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        
    }
    for(int i = 1; i <= n; i++){
        sort(adj[i].begin(),adj[i].end());
    }
    for(int i = 1; i <= n; i++){
        if(!vis[i]) bfs(i);
    }
}