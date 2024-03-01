#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,a,b;
    cin >> n >> a >> b;
    vector<int>f(n+1);
    f[1] = a;
    f[2] = b;
    int cnt = 0;
    for(int i = 3; i <= n; i++) 
    cout << (f[i] = f[i-1]+i-1 + f[i-2]+ i-2) <<" ";
    for(int i = 1; i <= n; i++)
    if (f[i] % 6 == 0) 
    {
        cnt++;
        cout << f[i] << endl;
    }
    cout << cnt << endl;
}