#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll z[100000], y[100000], t[1000000], n, m;
void import()
{
    cin >> m >> n;
    for (int i = 0; i < n; i++)
        cin >> t[i] >> z[i] >> y[i];
}
bool check(ll x)
{
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        ll under = t[i] * z[i] + y[i];
        cnt += (((x / under) * z[i]) + min((x % under) / t[i], z[i]));
    }
    //cout << cnt << endl;
    return cnt >= m;
}
ll search(ll left, ll right)
{
    if ((right - left) <= 1)
        return (check(left)) ? left : right;
    ll mid = (left + right) / 2;
    if (check(mid))
        return search(left, mid);
    else
        return search(mid, right);
}
void solve()
{
    ll up = m * (t[0] + y[0]);
    ll time = search(0, up);
    ll cnt = 0;
    cout << time << "\n";
    for (int i = 0; i < n; i++)
    {
        ll under = t[i] * z[i] + y[i];
        ll result = (time / under) * z[i] + min((time % under) / t[i], z[i]);
        result = min(result,m);
        m -= result;
        cout << result << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    import();
    solve();
}