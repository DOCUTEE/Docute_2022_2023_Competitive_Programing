#include <bits/stdc++.h>

using namespace std;
#define int long long

void import(int &n, vector<vector<int>> &a)
{
    cin >> n;
    a.resize(n + 5, vector<int>(n + 4, 0));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
}
int boom(int n, vector<vector<int>> a, int x, int y)
{
    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    int cnt = 0;
    for (int i = 0; i < 8; i++)
    {
        if (a[x + dx[i]][y + dy[i]] == 1)
            cnt++;
    }
    return cnt;
}
vector<vector<int>> solve(vector<vector<int>> a, int n)
{
    vector<vector<int>> ans(n + 4, vector<int>(n + 4, -1));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j] != 1)
                ans[i][j] = boom(n, a, i, j);
    return ans;
}
void exp(vector<vector<int>> a, int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    vector<vector<int>> a;
    import(n, a);
    vector<vector<int>> result = solve(a, n);
    exp(result, n);
    return 0;
}