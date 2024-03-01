#include <bits/stdc++.h>
using namespace std;
long long t,l,r,d[1000005];
bool check[1000005];
void solve(){
    check[0] = 0;
    check[1] = 0;
    for(long long i = 2; i <= 1000; i++) if(check[i])
        for(long long j = i*i; j <= 1000000; j += i) check[j] = 0;
}
int main(){
    fill_n(check,1000005,1);
    cin >> t;
    solve();
    for(long long i = 2; i <= 1000000; i++) d[i] = d[i-1] + check[i];
    while(t--){
        cin >> l >> r;
        cout << d[r] - d[l-1] << endl;
    }
}