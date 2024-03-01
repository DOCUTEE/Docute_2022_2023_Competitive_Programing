#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int inf = 1e18;
int a[1005][1005],b[1005][1005],c[1005][1005];
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++) cin >> b[i][j];
    for (int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
        {
            for(int k = 1; k <= n; k++) c[i][j] += a[i][k]*b[k][j];
        }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n;j++) cout << c[i][j] << " ";
        cout << endl;
    }
}