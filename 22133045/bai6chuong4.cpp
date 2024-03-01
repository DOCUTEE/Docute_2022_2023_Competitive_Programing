#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int fibo(int n)
{
    if (n == 0 || n == 1) return 1;
    else return fibo(n-1) + fibo(n-2);
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int result = fibo(n);
    cout << result;
}