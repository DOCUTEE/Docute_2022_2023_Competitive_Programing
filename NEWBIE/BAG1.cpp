#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int max (int a, int b) 
{
    if (a > b) return a;
    else return b;
}

int main(){
    int dp[700][700] = {{0}};
    int weight[700], value[700];
    int n,m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> weight[i] >> value[i];
    for (int j = 1; j <= m; j++){
        for (int i = 1; i <= n; i++)
        {
            if (weight[i] <= j) 
            {
                dp[i][j] = max(dp[i-1][j] ,value[i]+dp[i-1][j-weight[i]]);
            }
            else dp[i][j] = dp[i-1][j];
        }
    }
    cout << dp[n][m];
    int i = n;
    int j = m;
    int count = 0;
    int result[700];
    while (dp[i][j] != 0)
    {
        if (dp[i][j] == dp[i-1][j]) i--;
        else {
            count++;
            result[count] = i;
            j -= weight[i];
            i--;
        } 
    }
    cout << endl;
    for (int i = 1; i <= count; i++) cout << result[i] << " ";
    return 0;
}