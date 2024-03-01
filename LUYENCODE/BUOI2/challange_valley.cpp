#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll int_max = 1e9 + 7;
ll n, t, temp;
bool check;
#define loop(i, a, n) for (int i = a; i < n; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        check = true;
        vector<int>a;
        loop(i, 0, n)
        {
            cin >> temp;
            if (a.size() == 0) a.push_back(temp);
            else if (a.back() != temp) a.push_back(temp);
        }
        loop(i, 1, a.size() - 1) if (a[i] > a[i - 1] && a[i] > a[i + 1])
        {
            check = false;
            break;
        }
        string result = (check) ? "YES" : "NO";
        cout << result << endl;
    }
    return 0;
}
