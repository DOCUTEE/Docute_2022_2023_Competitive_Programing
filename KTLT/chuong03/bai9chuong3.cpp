#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}
void import(int &n, vector<int> &v, int &k){
    cin >> n;
    v.resize(n);
    for(int &x: v) cin >> x;
    cin >> k;
}
bool compare(int x, int y){
    return x > y;
}
signed main(){
    fast();
    vector<int> v;
    int n,k;
    import(n,v,k);
    sort(v.begin(),v.end(),compare);
    reverse(v.begin(),v.end());
    v.insert(lower_bound(v.begin(),v.end(),k), k);
    reverse(v.begin(),v.end());
    for(auto x: v) cout << x << " ";
    return 0;
}