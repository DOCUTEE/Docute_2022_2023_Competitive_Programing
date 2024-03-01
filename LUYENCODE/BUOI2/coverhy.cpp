#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i, s, e) for (ll i = s; i < e; i++)
#define FoR(i, s, e) for (ll i = s; i <= e; i++)
#define deFor(i, s, e) for (ll i = s; i >= e; i--)
#define pb push_back
#define vll vector<ll>

ll const max2d = 1e4 + 7;
ll const maxN = 1e6 + 7;
ll const inf = 1e9 + 7;

ll m, n, k, a[800][800], pf[800][800];


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    /* !
    3 4 6
    0110
    1000
    1001
    */

    cin >> m >> n >> k;
    
    set<ll>divisors;
    FoR(i, 1, k) {
        if (k % i == 0) {
            if (i <= m && k <= i*n) {
                divisors.insert(i);
            } 
        }
    }

    if (divisors.empty()) {
        cout << -1;
        return 0;
    }

    FoR(i, 1, m) {
        string tmp;
        cin >> tmp;
        FoR(j, 1, n) {
            a[i][j] = (tmp[j-1] - '0');
            pf[i][j] = a[i][j] + pf[i-1][j] + pf[i][j-1] - pf[i-1][j-1];
        }
    }

    ll res = inf;
    for (auto x: divisors) {
        FoR(i, 1, m-x+1) {
            FoR(j, 1, n-(k/x)+1) {
                ll itl = i;
                ll jtl = j;
                ll irb = i+x-1;
                ll jrb = j+(k/x)-1;
                ll area = pf[irb][jrb] - pf[irb][jtl-1] - pf[itl-1][jrb] + pf[itl-1][jtl-1];
                res = min(res, area);
            }
        }
    }
    cout << res;
    return 0;
}