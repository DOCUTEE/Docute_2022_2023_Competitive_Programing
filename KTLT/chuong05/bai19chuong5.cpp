#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<vector<vector<int>>> d(n, vector<vector<int>>(m, vector<int>(2, INT_MAX)));
    d[0][0][0] = 0;
    queue<vector<int>> q;
    q.push({0,0,0});
    int dx[4] = {0,0,-1,1};
    int dy[4] = {1,-1,0,0};
    while(!q.empty())
    {
        int r = q.front()[0], c = q.front()[1], broken = q.front()[2];
        q.pop();
        for (int k = 0; k < 4; k++)
        {
            int x = r + dx[k], y = c + dy[k];
            if(min(x, y) >= 0 && x < n && y < m)
            {
                int new_broken = broken + arr[x][y] - '0';
                if(new_broken <= 1 && d[x][y][new_broken] > d[r][c][broken] + 1)
                {
                    d[x][y][new_broken] = d[r][c][broken] + 1;
                    q.push({x, y, new_broken});
                }
            }
        }
    }       
    int ans = min(d[n - 1][m - 1][0], d[n - 1][m - 1][1]);
    cout << (ans == INT_MAX ? -2LL : ans) + 1;
    return 0;
}