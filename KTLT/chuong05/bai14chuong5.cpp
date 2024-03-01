#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
const int inf = 1e18;

int f(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n % 2) return f(n/2) + f(n/2+1);
    else return f(n/2);
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; 
    cin >> n;
    cout << f(n);
}