#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
vector<int> a(100, 0);
int n;

void printPermutation()
{
    for (int i = 1; i <= n; i++) cout << a[i] << " ";
    cout << endl;
}
void solve(int k)
{
    if (k == n + 1)
    {
        printPermutation();
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        bool check = true;
        for (int j = 1; j < k; j++)
        {
            if (a[j] == i)
            {
                check = false;
                break;
            }
        }
        if (check)
        {
            a[k] = i;
            solve(k + 1);
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    cin >> n;
    solve(1);
    return 0;
}
