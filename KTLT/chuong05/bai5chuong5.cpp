#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
const int inf = 1e18;

int count1(int n)
{
    int cnt = 0;
    while (n)
    {
        cnt += (n & 1);
        n >>= 1;
    }
    return cnt;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; 
    cin >> n;
    cout << count1(n) << endl;
}