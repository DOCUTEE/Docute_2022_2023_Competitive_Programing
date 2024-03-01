#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
const int inf = 1e18;

void bina(vector<int> a, int n)
{
    for(int i = 0; i < (1 << n)-1; i++)
    {
        int cnt = n;
        while (a[cnt] != 0)
        {
            a[cnt] = 0;
            cnt--;
        }
        a[cnt] = 1;
        int DO = 0;
        for(int j = 1; j < n; j++) 
        if (a[j] == 0 && a[j+1] == 1) DO++;
        if (DO == 2) 
        {
            for(int j = 1; j <= n; j++) cout << a[j]; 
            cout << endl;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<int>a(n+5);
    bina(a, n);
}