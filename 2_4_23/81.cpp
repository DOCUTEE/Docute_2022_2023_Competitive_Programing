#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7; 
#define loop(i,a,n) for(int i = a; i <= n; i++)

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long l,r;
    cin >> l >> r;
    cout << "YES" << "\n";
    for(ll i = l; i <= r; i += 2) cout << i <<" "<< i+1 << "\n";
    return 0;
}