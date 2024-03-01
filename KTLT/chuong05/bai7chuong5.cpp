#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
const int inf = 1e18;

vector <bool> eratos(1000005,true);

void sang()
{
    eratos[0] = false;
    eratos[1] = false;
    for (int i = 2; i <= 1000000; i++)
    {
        if (eratos[i] == true)
        {
            for(int j = i*i; j <= 1000000; j+=i) eratos[j] = false;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; 
    cin >> n;
    sang();
    for(int i = 0; i < n; i++) 
    if (eratos[i] == true) cout << i << endl;
}