#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool check(string S){
    int i = 0, j= 0;
    for(int x = 0; x < S.size(); x++){
        if (S[x] == 'U') i++;
        if (S[x] == 'D') i--;
        if (S[x] == 'L') j--;
        if (S[x] == 'R') j++;
        if (i == 1 && j == 1) return true;
    }
    return false;
} 
void import(){
    int t,n;
    string S;
    cin >> t;
    while (t--){
        cin >> n;
        cin >> S;
        //cout << S << "\n";
        string result = (check(S)) ? "YES" : "NO";
        cout << result << "\n";
    }
}  
void solve(){

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    import();
}