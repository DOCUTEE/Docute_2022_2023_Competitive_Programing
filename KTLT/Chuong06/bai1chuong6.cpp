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
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int j = i;
        while(j != 0)
        {
            cout << (j & 1);
            j = j >> 1;
        }
        cout << endl;
    }
}