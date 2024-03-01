#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
const int inf = 1e18;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;  
    cin >> n;
    vector<int> v(n);
    for(auto &x: v) cin >> x;
    int cmp = -inf;
    for(auto x: v)
    {
        if (x % 2 == 0) cmp = max(cmp, x); 
    }
    cout << cmp + 1;
}