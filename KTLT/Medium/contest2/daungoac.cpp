#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int n,k;
vector<bool>check(25,0);
vector<string>result;
string convert(vector<bool>save)
{
    string S = "";
    for(int i = 1; i <= n; i++)
    if (!save[i]) S += "(";
    else S += ")";
    return S;
}
void backtrack(int cnt, int deep, int maxdepth)
{
    if (cnt == n)
    {
        if (deep == 0 && maxdepth == k) result.push_back(convert(check));
        return;
    }
    else if (deep < 0 || maxdepth > k || deep > k) return; 
    for(int i = 0; i <= 1; i++)
    {
        if (i == 0) 
        {
            check[cnt+1] = 0;
            backtrack(cnt + 1, deep + 1, max(maxdepth,deep+1));
        }
        else 
        {
            check[cnt+1] = 1;
            backtrack(cnt + 1, deep - 1, maxdepth);
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    backtrack(0,0,0);
    for(auto x: result) cout << x << endl;
    cout << (275 << 1);
}

