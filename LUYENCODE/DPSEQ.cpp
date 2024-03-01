#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll int_max = 1e9+7;
ll dp[100005],temp,n,k,a[100005];
#define loop(i,a,n) for(int i = a; i <= n; i++)
void find_best1_best2(){
    best1 = -int_max;
    loop(i,1,k){
        if (dp[i] > best1){
            temp = dp[i];
            pos1 = i;
        }
        check[a[i]+1000]++;
    }
    best2 = -int_max;
    loop(i,1,k){
        if (dp[i] > best2 && i != pos1){
            best2 = dp[i];
            pos2 = i;
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> k;
    loop(i,1,n) cin >> a[i];
    loop(i,1,k){
        loop(j,1,i-1) if(a[j] > 0) dp[i] +=a[j];
        dp[i] +=a[i];
    }
    find_best1_best2();
    loop(i,k+1,n){
        if (a[i] > )
        dp[i] = temp + a[i];
    }
    ll res = -int_max;
    loop(i,0,n) res = max(res,dp[i]);
    cout << res;
}