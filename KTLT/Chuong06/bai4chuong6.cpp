#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int inf = 1e18;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    set<int>save;
    for(int i = 0; i < n; i++)
    {
        if (save.count(a[i]) == 0)
        {
            cout << a[i] << " ";
            save.insert(a[i]);
        }
    }
}