#include <bits/stdc++.h>
using namespace std;
#define ll long long
int check(int left, int right,string S){
    
}
void import(){
    int t,n;
    string S;
    cin >> t;
    while (t--){
        cin >> n;
        if (n){
        cin >> S;
        cout << check(0,S.size()-1,S) << "\n";
        } else cout << 0 << "\n";
    }
}  
void solve(){

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    import();
}