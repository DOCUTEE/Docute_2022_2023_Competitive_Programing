#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

bool vis[104][104] = {false};
int dx[8] = {-2, -2, -1, -1, 1,1,2,2};
int dy[8] = {1,-1,-2,2,-2,2,-1,1};
int e,k,n;
set<pair<int,int>>save;
const int inf = 1e18;
int nx,ny;
void dfs(int x, int y)
{
    vis[x][y] = true;
    for(int i = 0; i < 8; i++)
    {
        nx = x + dx[i];
        ny = y + dy[i];
        if (nx >= 1 && ny >= 1 && nx <= e && ny <= e && !vis[nx][ny])
        {
            vis[nx][ny] = true;
            dfs(nx, ny);
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> e >> k >> n;
    int x,y;
    for(int i = 0; i < k; i++)
    {
        cin >> x >> y;
        save.insert({x,y});
    }
    for(int run = 0; run < n; run++)
    {
        cin >> x >> y;
        vis[x][y] = true;
        for(int i = 0; i < 8; i++)
        {
            nx = x + dx[i];
            ny = y + dy[i];
            if (nx >= 1 && ny >= 1 && nx <= e && ny <= e)
            {
                vis[nx][ny] = true;
            }
        }
    }
    int cnt = 0;
    for(auto it: save)
    {
        cnt += vis[it.first][it.second];
    }
    cout << cnt << endl;
}