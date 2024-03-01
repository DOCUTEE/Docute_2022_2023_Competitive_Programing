#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string S;
    getline(cin, S);
    int hold = 0;
    int res = 0;
    for(int i = 0; i < S.size(); i++)
    {
        if (S[i] >= '0' && S[i] <= '9') hold = hold * 10 + S[i] - '0';
        else 
        {
            res += hold;
            hold = 0;
        }
    }
    if (hold != 0) res += hold;
    cout << res << endl;
}