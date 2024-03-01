#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i, a, n) for (int i = a; i < n; i++)
int n, l, r, x, result, people[200005];
bool check[200005];
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> x;
    loop(i, 0, n) cin >> people[i];
    sort(people, people + n);
    l = 0;
    r = n - 1;
    while (l < r)
    {
        if (people[l] + people[r] > x)
            r--;
        else
        {
            result++;
            check[l] = check[r] = true;
            l++;
            r--;
        }
    }
    loop(i, 0, n) if (!check[i]) result++;
    cout << result;
    cout << endl;
    return 0;
}