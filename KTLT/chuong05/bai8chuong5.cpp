#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
const int inf = 1e18;

bool check(string S)
{
    for(int i = 0; i < S.size()/2; i++)
    {
        if (S[i] != S[S.size() - i - 1]) return false;
    }
    return true;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string S;
    getline(cin, S);
    if (check(S)) cout << "Doi xung";
    else cout << "NOT";
    
}