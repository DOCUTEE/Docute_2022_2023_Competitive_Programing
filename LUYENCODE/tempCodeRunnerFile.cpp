#include <bits/stdc++.h>
using namespace std;
#define loop(i,a,n) for(int i = a; i <= n;i++)
int n,dem;
int a[500005],sum[500005];
long long result;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    loop(i,1,n) {
        cin >> a[i];
        sum[i] = sum[i-1] + a[i];   
    }
    int cnt3;
    if (sum[n] % 3 == 0){
    loop(i,1,n-1){
        if(sum[i] == (sum[n]/3)) cnt3++;
        if(sum[i] == (2*sum[n]/3)) dem+=cnt3;
    }
    cout << dem;
    } else cout << 0;
}