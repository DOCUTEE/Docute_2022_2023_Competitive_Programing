#include <bits/stdc++.h>
using namespace std;
int n,x,y;
vector<vector<int> >miser;
vector<int>k;
vector<int>dp;
int maxtick(int end){
    int best = dp[miser[end][0]];
    for (int j = 0; j < k[end]; j++)
    if (dp[miser[end][j]] > best) best = dp[miser[end][j]];
	return best;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int max = 0;
    for (int i = 0; i < n; i++){
        vector<int>temp;
        cin >> x;
        k.push_back(x);    
        if (x > max) max = x;
        for (int j = 0; j < x; j++) {
            cin >> y;
            temp.push_back(y);
        }
        miser.push_back(temp);
    }
    for (int i = 0; i <= 100000; i++) dp.push_back(0);
    int tam;
    for (int i = n-1; i >=0; i--){
        for (int j = 0; j < k[i]; j++) dp[miser[i][j]]++;
        tam = maxtick(i);
        for (int j = 0; j < k[i]; j++) dp[miser[i][j]] = tam;
    }
    int chos = dp[1];
    for (int i = 1; i <= 100000; i++)
    if (dp[i] > chos) chos = dp[i];
    cout << chos;
    return 0;
}