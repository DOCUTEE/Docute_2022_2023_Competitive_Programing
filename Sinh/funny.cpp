#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int inf = 1e18;

signed main()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int sum = 0;
    for (int i = 0; i < n; i++) sum += a[i];
    cout << sum << endl;
    return 0;
}