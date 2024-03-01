#include<bits/stdc++.h>
using namespace std;

#define int unsigned long long
#define endl '\n'

const int inf = 1e18;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int>f(n+2);
    f[0] = 1;
    f[1] = 1;
    for(int i = 2; i <= n; i++) f[i] = f[i-1] + f[i-2];
    for(int i = 0; i <= n; i++) cout << f[i] << " ";
}