//#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
 
//#define int long long
//#define endl '\n'
 
int n,m;
bool vis[1005][1005];
string a[1005];
int ni,nj;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
void dfs(int i, int j)
{
    vis[i][j] = true;
    for(int k = 0; k < 4; k++)
    {
        ni = i + dx[k];
        nj = j + dy[k];
        if (ni >= 0 && nj >= 0 && ni < n && nj < m && !vis[ni][nj] && a[ni][nj] == '.')
        {
            vis[ni][nj] = true;
            dfs(ni,nj);
        }
    }
}
int cnt;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        getline(cin, a[i]);
    }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            if (!vis[i][j] && a[i][j] == '.')
            {
                cnt++;
                dfs(i,j);
            }
        }
    cout << cnt;    
    return 0;
}