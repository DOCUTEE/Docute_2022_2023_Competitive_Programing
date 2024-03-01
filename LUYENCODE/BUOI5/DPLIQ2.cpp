#include <bits/stdc++.h>
using namespace std;
#define loop(i,a,n) for(int i = a; i <= n; i++)
int arr[1005],dp[1005],pos[1005],res[1005],n,best,j = 1,jmax,check;
int max(int a, int b){
    return a > b ? a : b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    loop(i,1,n) cin >> arr[i];
    loop(i,1,n){
        dp[i] = 0;
        jmax = 0;
        loop(j,0,i-1) if (arr[i] > arr[j] && dp[j]+1 > dp[i]){
                dp[i] = dp[j]+1;
                jmax = j;
            } 
            if (best <= dp[i]){
                best = dp[i];
                check = i;
            }
            pos[i] = jmax;
    }
    cout << best << endl;
    int i = check;
    int temp = best;     
    while (best--){
        res[best] = arr[i];
        i = pos[i];
    }
    for (int i = 0; i < temp ; i++) cout << res[i] << " ";
    return 0; 
}