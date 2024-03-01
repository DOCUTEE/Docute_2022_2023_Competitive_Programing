#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int inf = 1e18;
vector<int> truy(vector<int>pre,int n,vector<int>a)
{
    int i = n+1;
    vector<int>result;
    while(pre[i] != 0)
    {
        i = pre[i];
        result.push_back(a[i]);
    }
    reverse(result.begin(),result.end());
    return result;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<int>a(n+2);
    for(int i = 1; i <= n; i++) cin >> a[i];
    vector<int>L(n+2);
    a[0] = -inf;
    a[n+1] = inf;
    L[0] = 1;
    vector<int>pre(n+2);
    for(int i = 1; i <= n+1; i++)
    {
        L[i] = 1;
        for(int j = 0; j < i; j++)
        if (a[i] >= a[j] && L[j] >= L[i])
        {
            L[i] = L[j]+1;
            pre[i] = j;
        }
    }
    cout << L[n+1]-2 << endl;
    vector<int> result = truy(pre,n,a);

    for(auto x: result) cout << x << " ";
}