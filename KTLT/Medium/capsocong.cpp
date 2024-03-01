#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
map<int,map<int,int>>cnt;
void factor(int x)
{
    int hold = x;
    if (x % 2 == 0)
    {
        int temp = 1;
        while(x % 2 == 0)
        {
            x /= 2;
            temp *= 2;
        }
        cnt[2][(hold/temp) % 2]++;
    }
    for(int i = 3; i*i <= x; i+=2)
    {
        if (x % i == 0)
        {
            int temp = 1;
            while (x % i == 0)
            {
                x /= i;
                temp *= i;
            }
            cnt[i][(hold/temp) % i]++;
        } 
    }
    if (x > 2) cnt[x][(hold/x) % x]++;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        factor(x);
    }   
    int res = 0;
    for(auto x: cnt)
    {
        cout << x.first << "|";
        for(auto y: x.second) 
        {
            res = max(res, y.second);
            cout << y.second << " ";
        }
        cout << endl;
    }
    cout << res << endl;
}