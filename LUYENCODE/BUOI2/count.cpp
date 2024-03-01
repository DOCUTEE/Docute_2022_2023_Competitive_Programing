#include <bits/stdc++.h>
using namespace std;
#define loop(i,a,n) for(int i = a; i <= n; i++)
typedef long long ll;
ll r,l,sum[500005],a[500005],n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    loop(i,1,n) {
        cin >> a[i];
        sum[i] = sum[i-1] + a[i];
    }
    if (sum[n] % 3 == 0){
    loop(i,1,n-1){
        if (sum[i] == 2*sum[n]/3) r += l;
        if (sum[i] == sum[n]/3) l++; 
    }
    cout << r;
    } else cout << 0;
    return 0;
}