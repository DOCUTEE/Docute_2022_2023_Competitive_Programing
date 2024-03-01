#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
vector<int>a(100,0);
vector<int>num;
int n;
void import(vector<int> &num, int &n)
{
    cin >> n;
    num.resize(n);
    for(int i = 0; i < n; i++) cin >> num[i];
}
void exp()
{
    cout << "{";
    for(int i = 0; i < n; i++) 
    if (a[i]) cout <<" "<< num[i];
    cout << " }" << endl;

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
    import(num, n);
    solve(0);
}