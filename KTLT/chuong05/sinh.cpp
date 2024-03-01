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
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int dichx[8] = {-2,-2,-1,1,2,2,1,-1};
    int dichy[8] = {1,-1,-2,-2,-1,1,2,2};
    int res = 0;
    for(int i = 0; i <= 7; i++)
    {
        int cuoi1 = x1 + dichx[i], cuoi2 = y1 + dichy[i];
        if (cuoi1 >= 0 && cuoi2 >= 0 && cuoi1 < 8 && cuoi2 < 8)
        {
            if (cuoi1 == x2 && cuoi2 == y2) res = i+1;
        }
    }
    cout << res;
    return 0;
}