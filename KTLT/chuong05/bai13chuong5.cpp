#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
const int inf = 1e18;
vector<int>Ngan(1000005);
void bina(vector<int> a, int n)
{
    Ngan[0] = 1;
    for(int i = 0; i < (1 << n)-1; i++)
    {
        int Do = 0;
        int cnt = n;
        while (a[cnt] != 0)
        {
            a[cnt] = 0;
            cnt--;
        }
        a[cnt] = 1;
        for(int j = 1; j <= n; j++) Do += a[j];
        Ngan[Do]++;
    }
    for(int i = 0; i <= n; i++) cout << Ngan[i] <<" ";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<int>a(n+5);
    bina(a, n);
}