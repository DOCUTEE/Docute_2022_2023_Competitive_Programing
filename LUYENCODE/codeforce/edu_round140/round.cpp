#include <bits/stdc++.h>
using namespace std;
#define loop(i, a, n) for (int i = a; i <= n; i++)
const int int_max = 1e9 + 7;
typedef long long ll;
ll t,n,m,k,temp;
string result;
bool check;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--){
        check = true;
        cin >> n >> m >> k;
        loop(i,1,m){
            cin >> temp;
            if (temp > (n+k-1)/k) check = false;
        }
        string result = (check) ? "YES" : "NO";
        cout << result << endl;
    }
    return 0;
}