#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int n;
vector<int>y(18);
vector<vector<int>>save(1000000);
int cnt = 0;
bool check(int i, int j)
{
    for(int x = 1; x < i; x++)
    {
        if (y[x] == j || abs(x-i) == abs(y[x] - j)) return false;
    }
    return true;
}
void backtrack(int i)
{
    for(int j = 1; j <= n; j++){
        if(check(i,j))
        {
            y[i] = j;
            if (i == n)
            {
                cnt++;
                for(int i = 1; i <= n; i++) save[cnt].push_back(y[i]);
            }
            backtrack(i+1);
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int q;
    cin >> n >> q;
    backtrack(1);
    while (q--)
    {
        int req;
        cin >> req;
        for(auto x: save[req]) cout << x <<" ";
        cout << endl;
    }
}