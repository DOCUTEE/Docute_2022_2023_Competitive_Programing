#include <bits/stdc++.h>
using namespace std;
#define loop(i, a, n) for (int i = a; i < n; i++)
#define reloop(i, a, n) for (int i = a; i >= n; i--)
const int int_max = 1e9 + 7;
typedef long long ll;
ll n, k, t, i, result, start, en, r, l, a[100005];
bool check;
bool decre(ll a[], ll n)
{
    loop(i, 0, n) if (a[i] < a[i + 1]) return false;
    return true;
}
bool incre(ll a[], ll n)
{
    loop(i, 0, n) if (a[i] > a[i + 1]) return false;
    return true;
}
ll solve(ll a[], ll n)
{
    vector<ll> save(0);
    loop(i, 0, n)
    {
        if (save.size() == 0)
            save.push_back(a[i]);
        else if (a[i] != save.back() && a[i] != save.front())
            save.push_back(a[i]);
    }
    if (save.size() == 1)
        return 0;
    if (save.size() == 2)
    {
        if ((save.back() - save.front()) % 2 != 0)
            return -1;
        else
            return (save.back() + save.front()) / 2;
    }

    return -1;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        loop(i, 0, n) cin >> a[i];
        result = solve(a, n);

        if (incre(a, n - 2) && a[0] > a[n - 1])
            result = (a[n - 2] + a[n - 1] + 1) / 2;
        else if (decre(a, n - 1))
            result = a[0];
        else if (incre(a, n - 1))
            result = 0;
        cout << result << endl;
    }
    cout << endl;
}