#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
vector<int>a(100,0);
int n;
void import(vector<int> &a, int &n)
{
    cin >> n;
    a.resize(n);
    for(int i = 0; i < n; i++) cin >> a[i];
}
void exp()
{
    for(int i = 0; i < n; i++) cout << a[i];
    cout << endl;

}
void solve(int k){
    if (k == n)
    {
        exp();
    }
    else 
        {
            for(int i = 0; i <= 1; i++)
            {
                a[k] = i;
                solve(k+1);
            }
        }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    solve(0);
}