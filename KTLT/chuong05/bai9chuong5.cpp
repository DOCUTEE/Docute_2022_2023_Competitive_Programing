#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
const int inf = 1e18;


signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m;
    cin >> n >> m;
    vector<vector<int>>a(n, vector<int>(m));
    vector<int>col(m),row(n);
    for(int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) cin >> a[i][j];
    for(int j = 0; j < m; j++)
    {
        for(int i = 0; i < n; i++)
        col[j] = min(col[j], a[i][j]);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        row[i] = max(row[i], a[i][j]);
    }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            if (row[i] == a[i][j] && col[j] == a[i][j])
            cout << a[i][j] << endl;
        }
}