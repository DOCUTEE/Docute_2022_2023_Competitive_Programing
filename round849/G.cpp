#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll check(ll n, ll c){
    vector<ll>a;
    int temp;
    for(ll i = 1; i <= n; i++){
        cin >> temp;
        temp += i;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    //for (auto x: a) cout << x << " ";    
    ll i = 0,cnt = 0,sum = 0;
    while(i < n){
        if ((sum + a[i]) <= c) {
            sum += a[i];
            cnt++;
            //cout << sum <<" ";
        }
        else i = n+1;
        i++;
    }
    return cnt;
}
void import(){
    ll t,n,c;
    cin >> t;
    while (t--){
        cin >> n >> c;
        cout << check(n,c) << "\n";
    }
}  
void solve(){

}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    import();
}