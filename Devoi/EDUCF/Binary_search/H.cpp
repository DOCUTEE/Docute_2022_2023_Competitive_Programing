#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int inf = 1e18;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string S;
    getline(cin, S);
    vector<int>a(3),p(3);
    for(int i = 0; i < 3; i++) cin >> a[i];
    for(int i = 0; i < 3; i++) cin >> p[i];
    int money;
    cin >> money;
    map<char,int>cnt;
    cnt['B'] = 0;
    cnt['S'] = 0;
    cnt['C'] = 0;
    for(auto x: S) cnt[x]++;
    int c1,c2,c3;
    c1 = (int)(cnt['B'] ? a[0]/cnt['B'] : inf);
    c2 = (int)(cnt['S'] ? a[1]/cnt['S'] : inf);
    c3 = (int)(cnt['C'] ? a[2]/cnt['C'] : inf);
    int res = min({c1,c2,c3});
    if (cnt['B']) a[0] -= res*cnt['B'];
    if (cnt['S']) a[1] -= res*cnt['S'];
    if (cnt['C']) a[2] -= res*cnt['C'];
    int l = 1, r = money;
    int preval = 0;
    while(r >= l)
    {
        int mid = (l+r)/2;
        preval = max(mid*cnt['B']-a[0],(int)0)*p[0] + max(mid*cnt['S']-a[1],(int)0)*p[1] + max(mid*cnt['C']-a[2],(int)0)*p[2];
        if (preval <= money) l = mid + 1;
        else r = mid - 1;
    }
    res += (l-1);
    cout << res << endl;
}