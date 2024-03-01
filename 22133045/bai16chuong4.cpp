#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10;
int n;
int a[MAXN][MAXN];
int res = INT_MAX;

void import(){
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}
void dfs(int cur, int mask, int cost) {
    if (mask == (1 << n) - 1) {
        res = min(res, cost + a[cur][0]);
        return;
    }
    for (int i = 0; i < n; i++) {
        if (!(mask & (1 << i))) {
            dfs(i, mask | (1 << i), cost + a[cur][i]);
        }
    }
}

int main() {
    import();
    dfs(0, 1, 0);
    cout << res << endl;
    return 0;
}
