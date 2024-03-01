#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int findgcd(int a,int b)
{
    if (b == 0) return a;
    else return findgcd(b, a % b);
}
int gcd(vector<int> a, int n)
{
    int gcd = a[0];
    for(int i = 0; i < n; i++) gcd = findgcd(gcd, a[i]);
    return gcd;
}
void import(vector<int> &a, int &n)
{
    cin >> n;
    a.resize(n);
    for(int i = 0; i < n; i++) cin >> a[i];
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    vector<int>a;
    int n;
    import(a, n);
    int result = gcd(a, n);
    cout << result << endl;
}