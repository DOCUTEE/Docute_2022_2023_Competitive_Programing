#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i, a, n) for (int i = a; i <= n; i++)
int final,q;
vector<int>ngto;
double l,r;
bool prime[10000007];
void sang(int n){
    fill(prime+2, prime + n+1, true);
    loop(i,2,sqrt(n)) if(prime[i]) 
    for (int j = i*i; j <= n; j+=i) prime[j] = false;
    loop(i,2,n) if(prime[i]) ngto.push_back(i);
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> q;
    sang(10000000);
    while (q--){
        cin >> l >> r;
        ll l1 = ceil(sqrt(l));
        ll r1 = (ll)sqrt(r);
        ll left = lower_bound(ngto.begin(), ngto.end(), l1) - ngto.begin();
        ll right = upper_bound(ngto.begin(), ngto.end(), r1) - ngto.begin();
        cout << (right - left) << endl;
    }
}