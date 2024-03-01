#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int inf = 1e18;
int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};
int n,m;
vector<vector<int>>a(505, vector<int>(505));
bool up(vector<int>save)
{
    save.push_back(inf);
    sort(save.begin(), save.end());
    for(int i = 0; i < save.size()-1; i++)
    {
        if (save[i] == save[i+1]) return false;
    }
    return true;
}
bool check(int i, int j)
{
    int di, dj;
    vector<int>save;
    for(int k = 0; k < 8; k++)
    {
        di = i + dx[k];
        dj = j + dy[k];
        if (di >= 1 && dj >= 1 && di <= n && dj <= m)
        {
            save.push_back(a[di][dj]);
        }
    }
    return up(save);
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    int sum = 0,cnt = 0;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
        {
            if (check(i,j))
            {
                sum += a[i][j];
                cnt++;
            }
        }
    if (cnt == 0) cout << -1; 
    else cout << sum/cnt;
}