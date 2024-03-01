#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int th(int n, int k){
	if (k == 1) return n;
	if (n == k) return 1;
	return th(n-1,k)+ th(n-1,k-1);
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin >> n >> k;
    cout << th(n,k);
    return 0;
}