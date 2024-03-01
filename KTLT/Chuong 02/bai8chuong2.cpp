#include <bits/stdc++.h>
using namespace std;
#define int long long
const double inf = 1e18;
struct point{
    int x;
    int y;
};
void import(int &n, int &m, vector<vector<double>> &a)
{
    cin >> n >> m;
    a.resize(n + 5, vector<double>(m + 5, -inf));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
}
bool check_convex(int x, int y, vector<vector<double>> a)
{
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    for (int i = 0; i < 4; i++)
        if (a[x][y] <= a[x + dx[i]][y + dy[i]])
            return false;
    return true;
}
point solve(int n, int m, vector<vector<double>> a)
{
    point temp = {-1,-1};
    double down = inf;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (check_convex(i, j, a)){
                if (down > a[i][j])
                {
                    down = a[i][j];
                    temp.x = i;
                    temp.y = j;
                }
            }
        }
    return temp;
}
void exp(point result){
    if (result.x >= 0 && result.y >= 0) cout << result.x << " " << result.y;
    else cout << -1;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    vector<vector<double>> a;
    import(n, m, a);
    point result = solve(n,m,a);
    exp(result);
}