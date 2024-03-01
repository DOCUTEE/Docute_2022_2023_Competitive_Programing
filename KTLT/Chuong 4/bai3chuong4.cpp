#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int gt(int n){
    if(n == 1 || n == 0) return 1;
    else return n*gt(n-1);
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    cout << gt(n);
    return 0;
}