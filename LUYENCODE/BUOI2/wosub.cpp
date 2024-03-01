#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(ll i = a; i <= n; i++)
ll r,l,sum[100005],a[100005],n,result,S,pos;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    loop(i,1,n) {
        cin >> a[i];
        sum[i] += (sum[i-1] + a[i]);
    }
    cin >> S;

    result = -1;
    loop(i,0,n-1) {
        //cout << sum[i] << " ";
        pos = lower_bound(sum+1,sum+n+1,(S+sum[i])) - sum;
        if (sum[pos] == (S + sum[i])) result = max(result,pos-i);
    }
    cout << result;
}