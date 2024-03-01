#include <bits/stdc++.h>
using namespace std;
long long n,temp;
vector<long long>arr,dp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    long long max = 0;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (temp > max) max = temp;
        arr.push_back(temp);
    }
    dp.push_back(1);
    dp.push_back(1);
    dp.resize(max+1);
    for (long long i = 2; i <= max; i++) dp[i] = dp[i-1] + dp[i-2];
    for (long long i = 0; i < n; i++) cout << dp[arr[i]] << endl;
    return 0;
}