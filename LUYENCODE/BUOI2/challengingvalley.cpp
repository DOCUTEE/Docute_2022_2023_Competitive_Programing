#include<bits/stdc++.h>
using namespace std;

int const maxN = 2e5 + 7;
int sign[maxN], n;

void solve() {
    cin >> n;
    vector<int> a;
    a.push_back(0);
    for(int i = 1, k = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (x != a[k-1]) {
            a.push_back(x);
            sign[k] = a[k] - a[k-1];
            k++;
        }
    }

    int vsize = a.size();

    if (vsize == 2) {
        cout << "YES" << '\n';
        return;
    }

    int cnt = 0;
    if (sign[2] > 0) cnt++;
    if (sign[vsize - 1] < 0) cnt++;
    
    for(int i = 1; i < vsize; i++) {
        if (sign[i] > 0 && sign[i-1] < 0) {
            cnt++;
        }
        if (cnt == 2) {
            cout << "NO" << '\n';
            return;
        }
    }
    if (cnt) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}