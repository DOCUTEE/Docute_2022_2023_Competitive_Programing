#include <bits/stdc++.h>
using namespace std;
#define loop(i, a, n) for (int i = a; i < n; i++)
const int int_max = 1e9 + 7;
typedef long long ll;
ll n, down, up, t, check[100006], number[100005];
ll result;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        down = int_max;
        up = -int_max;
        fill(check, check + 100005, 0);
        loop(i, 0, n)
        {
            cin >> number[i];
            check[number[i]]++;
            up = max(up, number[i]);
            down = min(down, number[i]);
        }
        result = (up != down) ? (check[up] * check[down] * 2) : ((n*(n-1)/2) * 2);
        cout << result << endl;
    }
    cout << endl;
}