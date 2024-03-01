#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[200005],arr[200005],n,best,temp;
#define loop(i,a,n) for(int i = a; i <=n; i++)
ll compare(ll a,ll b){
    return a > b ? a : b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    ll max= 0;
    loop(i,1,n){
        cin >> temp;
        if (temp > max) max = temp;
        dp[temp] +=temp;
        arr[i] = temp;
    }
    loop(i,1,max)
    if (dp[i] == 0) dp[i] = dp[i-1];
    else dp[i] = compare(dp[i] + dp[i-2], dp[i-1]);
    cout << dp[max];
    return 0;    
}
