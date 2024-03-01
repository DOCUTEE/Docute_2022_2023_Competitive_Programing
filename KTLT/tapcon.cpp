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
    vector<vector<int>>dp(104, vector<int>(((n+1)*n)/2 + 3));
    int sum = n*(n+1)/2;
    if (sum % 2){
        cout << 0;
        return 0;
    }
    dp[0][0] = 1;
    //call dp[i][j] is the number ways to splits the  from 1 to i become 2 set is the same, and j is the a half sum of the number series
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j <= (n+1)*n/2; j++){
        if (i > j) dp[i][j] = dp[i-1][j];
        else dp[i][j] = dp[i-1][j] + dp[i-1][j-i]; 
        //cout << dp[i][j] << " ";
        }
        //cout << endl;
    }
    cout << dp[n][((n+1)*n)/4]/2;
}