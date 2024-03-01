#include <bits/stdc++.h>
using namespace std;

#define int long long

void import(int &n, vector<int> &a, int &value)
{
    cin >> n >> value;
    a.resize(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
int search(int n, vector<int> a, int value)
{
    for (int i = 0; i < n; i++)
        if (a[i] == value)
            return i;
    return n;
}
void exp(int n, int pos)
{
    if (pos == n)
        cout << -1;
    else
        cout << pos;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, x;
    vector<int> a;
    import(n, a, x);
    int pos = search(n, a, x);
    exp(n, pos);
}