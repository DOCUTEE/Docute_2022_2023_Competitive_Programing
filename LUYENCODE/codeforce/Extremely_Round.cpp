#include <bits/stdc++.h>
using namespace std;
#define loop(i, a, n) for (int i = a; i < n; i++)
const int int_max = 1e9 + 7;
typedef long long ll;
int n, t, many;
int count_number(int n)
{
    int sub = 0;
    while (n)
    {
        sub++;
        n /= 10;
    }
    return sub;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    int hat[10] = {1, 10, 100, 1000, 10000, 100000, 10000000};
    while (t--)
    {
        cin >> n;
        many = count_number(n) - 1;
        cout << 9 * many + n / hat[many] << endl;
    }
    cout << endl;
}