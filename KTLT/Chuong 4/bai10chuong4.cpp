#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void import(vector<int> &a, int &n)
{
    cin >> n;
    a.resize(n);
    for(int i = 0; i < n; i++) cin >> a[i];
}
map<int,int> save;
void cnt(vector<int> a)
{
    for(auto it: a) save[it]++;
}
int solve()
{
    int down = 0;
    int res;
    for(auto it: save)
    if (it.second > down){
        down = it.second;
        res = it.first;
    }
    return res;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<int> a;
    int n;
    import(a, n);
    cnt(a);
    int res = solve();
    cout << res << endl;      
}