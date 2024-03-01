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
    string A,B;
    getline(cin, A);
    getline(cin,B);
    vector<vector<int>>dp(A.size()+1, vector<int>(B.size()+1));
    for(int i = 0; i < A.size(); i++)
    {
        for(int j = 0; j < B.size(); j++)
        {
            if (A[i] == B[j]) dp[i+1][j+1] = dp[i][j] + 1;
            else dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
        }
    }
    cout << dp[A.size()][B.size()];
    
}