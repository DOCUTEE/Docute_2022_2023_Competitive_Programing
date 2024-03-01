#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int inf = 1e9;
int a[200005];
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int save = 0;  
        map<int,int>check;
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = n; i >= 1; i--)
        {
            check[a[i]]++;
            if (check[a[i]] > 1 && save == 0){
                save = i;
            }
        }
        cout << save << endl;
    }
    return 0;

}