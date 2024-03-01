#include <bits/stdc++.h>
using namespace std;
int temp,n,m;
vector<long long>weight,value,dp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m; 
    for (int i = 0; i < n; i++){
        cin >> temp;
        weight.push_back(temp);
    }
    int max = 0;
    for (int i = 0; i < m; i++){
        cin >> temp;
        if (temp > max) max = temp;
        value.push_back(temp);
    }
    dp.resize(max+1);
    dp[0] = 1;
    dp[max] = 0;
    for (int i = 0; i < n; i++){
        for (int j = max; j >= weight[i]; j--)
        if ((dp[j] == 0) &&(dp[j-weight[i]] == 1)) dp[j] = 1;
    }
    for (int i = 0; i < m; i++) cout << dp[value[i]];
    return 0;
}