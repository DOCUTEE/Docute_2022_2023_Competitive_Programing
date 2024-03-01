#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int inf = 1e18;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<vector<int>>res(101,vector<int>(100,0));
    res[1][1] = 1;
    res[2][1] = 1;
    res[2][2] = 1;
    for(int i = 3; i <= 50; i++){
        for(int j = 1; j <= i; j++){
            res[i][j] = res[i-1][j-1]+res[i-1][j];
        }
    }
    for(int i = 1; i <= 50; i++){
        for(int j = 1; j <= i; j++) cout << res[i][j] << " ";
        cout << endl;
    }
}
