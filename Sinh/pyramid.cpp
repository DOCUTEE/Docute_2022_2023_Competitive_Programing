#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define endl '\n'

int inf = 1e18;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin >> n >> m;
    vector<vector<int>>a(n, vector<int>(m));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) cin >> a[i][j];
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int r = 0;
            bool check = true;
            while(check)
            {
                r++;
                if (!(i - r >= 0 && j - r >= 0 && i + r < n && j + r < m)){
                    r--;
                    break;
                }
                int temp = a[i-r][j-r];
                for (int x = -r; x <= r; x++)
                    for(int y = -r; y <= r; y++)
                    {
                        if (abs(x) == r || abs(y) == r)
                        {
                            if (a[i-x][j-y] != temp)
                            {
                                check = false;
                                goto exit;
                            }
                        }
                    }
                exit:;
            }
            if (check) ans += r;
            else ans += (r-1);
            //cout << r << check << " ";
        }
        //cout << endl;
    }
    cout << ans << endl;
}