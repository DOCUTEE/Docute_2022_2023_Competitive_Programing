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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>a(n+5);
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<int>Smax(n+5,0); //Smax[i] là max của đoạn từ 0 đến i
        Smax[0] = a[0];
        for(int i = 1; i < n; i++) Smax[i] = max(Smax[i-1], a[i]);
        vector<int>Smin(n+5,inf); //Smin[i] là min của đoạn từ n-1 về i
        Smin[n-1] = a[n-1];
        for(int i = n-2; i >= 0; i--) Smin[i] = min(Smin[i+1],a[i]);
        bool check = true;
        for(int i = 0; i < n-1; i++)
        if (Smax[i] > Smin[i+1]) {
            check = false;
            //cout << Smax[i] << " " << Smin[i+1] << endl;
        }
        if (check) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
} 

