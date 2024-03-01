#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int inf = 1e18;
vector<vector<string>>dp(105, vector<string>(105,""));
string A,B;
string max_string(string a, string b)
{
    if (a.size() > b.size()) return a;
    else if (b.size() > a.size()) return b;
         else return max(a,b);
}
void delete0(string &res)
{
    reverse(res.begin(), res.end());
    while(res.size() != 1 && (*res.rbegin() == '0'))
    {
        res.pop_back();
    }
    reverse(res.begin(), res.end());
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    getline(cin, A);
    getline(cin, B);
    for(int i = 0; i < A.size(); i++)
    {
        for(int j = 0; j < B.size(); j++)
        {
            if (A[i] == B[j]) dp[i+1][j+1] = dp[i][j] + A[i];
            else dp[i+1][j+1] = max_string(dp[i][j+1], dp[i+1][j]);
            delete0(dp[i][j]);
        }

    }
    string result = dp[A.size()][B.size()];
    if (result == "") result = "-1";
    cout << result;
}