#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
const int inf = 1e18;

int onbit(int n, int k)
{
    return n | (1 << k);
}
int offbit(int n, int k)
{
    return n & (~(1 << k));
}
int get(int n, int k)
{
    return (n >> k) & 1;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,k;  
    cin >> n >> k;
    cout << onbit(n,k) << endl;
    cout << offbit(n,k) << endl;
    cout << get(n,k) << endl;
}