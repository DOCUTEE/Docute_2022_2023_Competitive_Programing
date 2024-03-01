#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i, a, n) for (int i = a; i <= n; i++)
map<string, int> result;
string team1, team2, temp;
int t;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> team1 >> team2;
    cin >> t;
    while (t--)
    {
        cin >> temp;
        result[temp]++;
        cout << result[team1] << "-" << result[team2] << endl;
    }
}