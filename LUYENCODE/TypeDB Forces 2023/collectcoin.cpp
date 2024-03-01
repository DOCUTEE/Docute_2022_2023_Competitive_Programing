#include <bits/stdc++.h>
using namespace std;
string solve (int a, int b, int c, int n){
    int head = max({a,b,c});
    //cout << head << endl;
    int check = 3*head - a - b - c;
    return ((n - check) % 3 == 0 && (n >= check)) ? "YES" : "NO";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t,a,b,c,n;
    cin >> t;
    while (t--){
        cin >> a >> b >> c >> n;
        cout << solve(a,b,c,n) <<"\n";
    }
}