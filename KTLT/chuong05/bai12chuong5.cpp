#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
const int inf = 1e18;

int gt(int n)
{
    int temp = 1;
    for(int i = 1; i <= n; i++) temp *= i;
    return temp;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    for(int i = 0; i < gt(n); i++)
    {
        for(auto x: a) cout << x << " ";
        cout << endl;
        next_permutation(a.begin(), a.end());
    }
}   