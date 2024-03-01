#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool check(char c){
    string S = "codeforces";
    for(int i = 0; i < S.size(); i++)
    if (S[i] == c) return true;
    return false;
} 
void import(){
    int n;
    char c;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> c;
        string result = (check(c)) ? "YES" : "NO";
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