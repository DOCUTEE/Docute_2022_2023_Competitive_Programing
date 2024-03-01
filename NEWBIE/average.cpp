#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 201;

int n, k;
int a[N], dp[N][N * 400];

int fix(int x) {
    return x + n * 200;
}

void solve() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i]; a[i] -= k;
    }
    dp[0][fix(0)] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = -(n * 200); j <= n * 200; j++) {
            dp[i][fix(j)] = dp[i - 1][fix(j)] + dp[i - 1][fix(j - a[i])];
        }
    }
    cout << dp[n][fix(0)] - 1 << '\n';
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int T = 1; cin >> T;
    while (T--) solve();
}