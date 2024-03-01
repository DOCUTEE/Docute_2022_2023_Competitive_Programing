#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int inf = 1e18;
vector<bool>check(100005,true);
void sang()
{
    check[0] = check[1] = false;
    for(int i = 2; i <= 100001; i++)
    if (check[i])
    {
        for(int j = i*i; j <= 100001; j+=i) check[j] = false;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int>a;
    sang();
    for(int i = 0; i < n; i++) 
    {
        int x;
        cin >> x;
        if (check[x]) a.push_back(x);
    }
    n = a.size();
    vector<int>dp(n,1);
      
    int cmp = *max_element(dp.begin(),dp.end());
    cout << cmp << endl;
}