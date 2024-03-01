#include <bits/stdc++.h>
#include <string>
using namespace std;
int max(int a, int b){
    if (a>b) return a;
    else return b;
}
int main()
{
    string str1,str2;
    cin >> str1;
    cin >> str2;
    int n = str1.size();
    int m = str2.size();
    n++;
    m++;
    int dp[n][m] {};
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <=m; j++)
        {
            if (str1[i-1] == str2[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max (dp[i][j-1],dp[i-1][j]);
        }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << dp[n][m] << endl;
    int i = n;
    int j = m;
    string result = "";
    while ((i > 0) || (j > 0)){
        if (str1[i] == str2[j]) {
            result = str1[i] + result;
            i--;
            j--;
        }
        else if (dp[i-1][j] >= dp[i][j-1]) i--;
            else j--;
    }
    cout << result;
    return 0;
}