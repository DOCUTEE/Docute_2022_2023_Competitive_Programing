#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int inf =  1e18;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin >> n >> m;
    vector<int>mx(1005);
    for(int i = 1; i <= n; i++) mx[i] = i;
    for(int i = 1; i <= m; i++)
    {
        int x,y;
        cin >> x >> y;
        mx[x] = max(mx[x],y);
    }
    int res = n+1;
    int i = 1;
    while(i <= n)
    {
        int save = i;
        int tar = mx[i];
        while(i <= tar)
        {
            tar = max(tar,mx[i]);
            i++;
        }
        res += (tar - save)*2;
    }
    cout << res << endl;
}