#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
#define loop(i, a, n) for (int i = a; i < n; i++)
int n, amount, post[100005], t;
ll add[100005],temp;
vector<pair<ll, int>> arr(100005);
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        loop(i, 0, n)
        {
            cin >> arr[i].first;
            arr[i].second = i;
        }
        sort(arr.begin(), arr.begin()+n);
        temp = arr[0].first;
        amount = 0;
        loop(i, 1, n)
        {
            while (temp < arr[i].first)
            {
                temp *= 2;
            }
            if (temp > arr[i].first)
            {
                post[amount] = arr[i].second + 1;
                add[amount] = temp - arr[i].first;
                amount++;
            }
        }
        cout << amount << endl;
        loop(i, 0, amount) cout << post[i] << " " << add[i] << endl;
    }
    cout << endl;
    return 0;
}