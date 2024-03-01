#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int inf = 1e18;

int n,t1,t2;
vector<vector<int>>a(15, vector<int>(15));
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> t1 >> t2;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) cin >> a[i][j];
    vector<int>save;
    for(int i = 0; i < n; i++)
    {
        if (i != t1 && i != t2) save.push_back(i);
    }
    int gt = 1;
    for(int i = 1; i <= n-2; i++) gt *= i;
    int sum = 0, result = inf;
    if (n != 2)
    {
        for(int i = 1; i <= gt; i++)
        {
            sum = a[t1][save[0]] + a[*save.rbegin()][t2];
            for(int j = 0; j < save.size()-1; j++) sum += a[save[j]][save[j+1]];
            next_permutation(save.begin(), save.end());
            result = min(result,sum);
        }
        cout << result << endl;
    }
    else cout << a[t1][t2];
}