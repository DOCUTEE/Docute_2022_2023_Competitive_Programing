#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
#define loop(i, a, n) for (ll i = a; i < n; i++)
ll n,a[100],sum,result,t;
ll divi(ll x)
{
    ll temp = x, dem = 0;
    while (temp % 2 == x % 2)
    {
        dem++;
        x /= 2;
    }
    return dem;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        sum = 0;
        loop(i, 0, n)
        {
            cin >> a[i];
            sum += a[i];
        }
        result = 0;
        if (sum % 2){
            result = mod;
            loop(i, 0, n) result = min(result, divi(a[i]));
        }
        cout << result << endl;
    }
    return 0;
}