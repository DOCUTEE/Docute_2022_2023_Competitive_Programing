#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n = 3,S = 11, min = 1000000000;
    vector<int>arr {1,3,5};
    vector<int>dp;
    dp.resize(12);
    for (int i = 1; i <= 11; i++){
        min = 1000000000;
        for (int j = 0; j < 3; j++)
        if (arr[j] <= i) 
            if((dp[i - arr[j]] + 1) <= min ) min = dp[i - arr[j]] + 1;
        dp[i] = min;
    }
    cout << dp[11];
}