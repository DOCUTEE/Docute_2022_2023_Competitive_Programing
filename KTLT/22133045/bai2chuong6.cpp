#include<bits/stdc++.h>
using namespace std;

#define int unsigned long long
#define endl '\n'

const int inf = 1e18;

int gt(int x)
{
    int temp = 1;
    for(int i = 1; i <= x; i++) temp = temp*i;
    return temp;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin >> n >> k;
    cout << (gt(n)/gt(k))*(1/gt(n-k));
}