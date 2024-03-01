#include <bits/stdc++.h>
using namespace std;
#define loop(i, a, n) for (int i = a; i <= n; i++)
const int int_max = 1e9 + 7;
typedef long long ll;
int l, r, n, count0, count1, hat;
char win[100];
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    loop(i, 1, n)
    {
        cin >> win[i];
        (win[i] == '0') ? count0++ : count1++;
    }
    hat = pow(2, n);
    l = pow(2, count1);
    r = hat - pow(2, count0);
    loop(i, l, r + 1) cout << i << " ";
    cout << endl;
    return 0;
}