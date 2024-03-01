#include <bits/stdc++.h>
using namespace std;
#define loop(i,a,n) for(int i = a; i <= n; i++)  
typedef long long ll;
ll result,n,k,a[100010],step[100010],temp;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> k;
    loop(i,1,n) cin >> a[i];
    step[1] = a[1];
    loop(i,1,k+1) step[i] = max((ll)0,step[i-1]+a[i]);
    loop(i,k+1,n){
        temp = a[i];
        for(int j = i; j <= i+k-1 && j <= n; j++) step[j] = max(step[i]+a[j],step[j]);
        cout << temp << endl;
    }
    result = 0;
    loop(i,1,n) result = max(result,step[i]);
    loop(i,1,n) cout << step[i] << " ";
    cout << result;
    return 0;
}