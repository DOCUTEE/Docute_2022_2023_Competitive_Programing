#include <bits/stdc++.h>
using namespace std;
long long max(long long a, long long b){
	if (a > b) return a;
	else return b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n,S,x,y;
    cin >> n >> S;
    vector<long long>t,d;
    vector<vector<long long> >dp;
    for (long long i = 0; i <= n; i++){
        vector<long long>temp;
        for (long long j = 0; j <= S; j++) temp.push_back(0);
        dp.push_back(temp);
    }
    for (long long i = 0; i < n; i++){
        cin >> x;
        t.push_back(x);
    }
    for (long long i = 0; i < n; i++){
        cin >> y;
        d.push_back(y);
    }
    for (long long j = 1; j <= S; j++)
        for (long long i = 0; i < n; i++)
            if (t[i] <= j) dp[i+1][j] = max(dp[i][j],dp[i][j-t[i]] + d[i]);
            else dp[i+1][j] = dp[i][j];
    cout << dp[n][S];
    return 0;
}
