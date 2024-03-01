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
    vector<int>a(n+1);
    for(int i = 0; i < n; i++) cin >> a[i];
    a[n] = inf;
    vector<int>pr(n+1);
    for(int i = 0; i < n; i++) pr[i] = a[i+1]-a[i];
    int dem = 1;
    for(int i = 0; i < n; i++)
    {
        if (pr[i] >= 0){
            dem = 0;
            cout << a[i] << " ";
        } 
        else
            {
                ++dem;
                if (dem == 1){
                    cout << a[i] << endl;
                }
            } 
        //cout << pr[i] << " "<<dem << endl;
    }
}