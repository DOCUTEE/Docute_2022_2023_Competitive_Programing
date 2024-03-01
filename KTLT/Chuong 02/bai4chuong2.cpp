#include <bits/stdc++.h>
using namespace std;

#define int long long

void import(int &n, int &m, vector<vector<int>> &a)
{
    cin >> n >> m;
    a.resize(n, vector<int> (m));
    for (int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) cin >> a[i][j];
}
vector<int> convert(const vector<vector<int>>a){
    vector<int>temp;
    for(auto x: a)
        for(auto y: x) temp.push_back(y);
    return temp;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m;
    vector<vector<int>>a;
    import(n,m,a);
    vector<int>result = convert(a);
    for(auto x: result) cout << x << " ";
    return 0;
}