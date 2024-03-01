#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

bool compare(int a, int b)
{
    return a > b;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int k,n;
    cin >> k >> n;
    vector<int>a(n);
    int sum = 0;
    for(auto &x: a) 
    {
        cin >> x;
        sum += x;
    }
    int temp = 0;
    int l = 1, r = sum/k; 
    sort(a.begin(), a.end());
    while(r >= l)
    {
        int cnt = 0;
        temp = 0;
        int mid = (r+l)/2;
        for(int i = 0; i < n; i++)
        {
            temp += min(mid,a[i]);
            cnt += temp/mid;
            temp %= mid;
        }
        if (cnt >= k) l = mid+1;
        else r = mid - 1;
    }
    cout << l - 1;
}