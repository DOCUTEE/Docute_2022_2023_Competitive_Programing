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
    string S;
    getline(cin, S);
    string S1 = S;
    reverse(S.begin(), S.end());
    vector<vector<int>>dp(S.size()+1, vector<int>(S.size()+1, 0));
    for(int i = 1; i <= S.size(); i++)
        for(int j = 1; j <= S.size(); j++)
        {
            if (S[i-1] != S1[j-1]) dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            else dp[i][j] = dp[i-1][j-1]+1;
        }
    cout << dp[S.size()][S.size()];
}