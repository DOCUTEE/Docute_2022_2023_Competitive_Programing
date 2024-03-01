#include <bits/stdc++.h>
using namespace std;
#define loop(i,a,n) for(int i = a; i <= n; i++)
int arr[100005],dp[100005],n,best,j = 1;
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
        loop(j,0,i-1) if (arr[i] > arr[j]) dp[i] = max(dp[i], dp[j] + 1);
        best = max(best,dp[i]);
    }
    cout << best << endl;
    return 0; 
}