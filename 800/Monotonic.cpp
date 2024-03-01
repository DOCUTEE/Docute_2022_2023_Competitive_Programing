#include <bits/stdc++.h>
using namespace std;

#define int long long
#define For(i, a, n) for (int i = a; i <= n; i++)
#define endl "\n";
typedef vector<int> vi;
int a[1005][1005], l[1005][1005], r[1005][1005];
map<int, bool> check;

void exp(bool check)
{
    if (check)
        cout << "YES\n";
    else
        cout << "NO\n";
}
bool checktriangle(int a, int b, int c)
{
    return (a + b > c && a + c > b && b + c > a);
}
bool palindrome(string S)
{
    for (int i = 0; i < S.size() / 2; i++)
        if (S[i] != S[S.size() - i - 1])
            return false;
    return true;
}
bool compare(int a, int b)
{
    return a > b;
}
int h[1000005];
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    For(i, 1, n) For(j, 1, m) cin >> a[i][j];
    int ans = 0;
    For(i, 1, n)
    {
        For(j, 1, m)
        {
            if (a[i][j] == 1)
                h[j]++;
            else
                h[j] = 0;
        }
        stack<int> floor;
        vector<int> pos(m + 1);
        int result = 0;
        For(j, 1, m)
        {
            result = 0;

            while (!floor.empty() && h[floor.top()] >= h[j])
            {
                floor.pop();
            }
            if (floor.empty())
                result = 0;
            else
                result = floor.top();
            floor.push(j);
            pos[j] = result;
        }
        stack<int> floorr;
        vector<int> posr(m + 1);
        for (int j = m; j >= 1; j--)
        {
            result = m + 1;
            while (!floorr.empty() && h[floorr.top()] >= h[j])
            {
                floorr.pop();
            }
            if (floorr.empty())
                result = m + 1;
            else
                result = floorr.top();
            floorr.push(j);
            posr[j] = result;
        }
        For(i,1,m) ans = max(ans,h[i] * (posr[i] - pos[i] -1));
    }
    cout << ans;
}