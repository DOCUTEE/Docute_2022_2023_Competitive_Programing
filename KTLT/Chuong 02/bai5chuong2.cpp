#include <bits/stdc++.h>
using namespace std;

#define int long long

void import(int &n, int &m, vector<int> &a)
{
    cin >> m >> n;
    a.resize(n * m);
    for (auto &x : a)
        cin >> x;
}
vector<vector<int>> convert(int m, int n, const vector<int> a)
{
    vector<vector<int>> save;
    for (int i = 0; i < m; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
            temp.push_back(a[i * n + j]);
        save.push_back(temp);
    }
    return save;
}
void exp(vector<vector<int>>result){
    for (auto x : result)
    {
        for (auto y : x)
            cout << y << " ";
        cout << "\n";
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, m;
    vector<int> a;
    import(n, m, a);
    vector<vector<int>> result = convert(m, n, a);
    exp(result);
    return 0;
}