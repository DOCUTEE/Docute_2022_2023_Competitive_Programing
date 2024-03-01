#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void import(vector<int> &a, int &n)
{
    cin >> n;
    a.resize(n);
    for(int i = 0; i < n; i++) cin >> a[i];
}
bool isprime(int x)
{
    if (x <= 1) return false;
    else
    {
        for(int i = 2; i*i <= x; i++)
        if (x % i == 0) return false;
    }
    return true;
}
int result = 1e9+7;
int smallest(vector<int>a, int n)
{
    if (n == 1)
    {
        if (isprime(a[0])) return a[0];
        else return -1;
    }
    else 
        {
            int temp = smallest(a,n-1);
            if (a[n-1] < temp || temp == -1)
            {
                if (isprime(a[n-1])) return a[n-1];
                else return temp;
            }
            else return temp;
        }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int>a;
    int n;
    import(a,n);
    int result = smallest(a,n);
    cout << result;
}