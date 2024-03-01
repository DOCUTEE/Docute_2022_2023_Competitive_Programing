#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
const int inf = 1e18;

void bina(vector<int> a, int n, vector<int> v)
{
    for(int i = 0; i < n; i++) 
    if (a[i] == 1) cout << v[i] << " ";
    cout << endl;
    for(int i = 0; i < (1 << n)-1; i++)
    {
        int cnt = n;
        while (a[cnt] != 0)
        {
            a[cnt] = 0;
            cnt--;
        }
        a[cnt] = 1;
        for(int j = 1; j <= n; j++) 
        if (a[j] == 1) cout << v[j] << " ";
        cout << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<int>a(n+5);
    vector<int>v(n+5);
    for(int i = 1; i <= n; i++) cin >> v[i];
    bina(a, n, v);
}