#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(ll i = a; i <= n; i++)
#define reloop(i,b,a) for(ll i = b; i >= a; i--)
ll sum[100005],a[100005],n,result,L;
bool compare(ll a, ll b){
    return a > b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    loop(i,1,n){
        cin >> a[i];
        L += a[i];
    }
    sort(a+1,a+n+1,compare);
    loop(i,1,n){
        if (L != a[n]) result += L;
        L = L - a[i];
    }
    cout << result;
}
