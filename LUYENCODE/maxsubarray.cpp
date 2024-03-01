#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(int i = 0; i < n; i++)
int n,a[200005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    loop(i,0,n) cin >> a[i];
    ll limit = - 1e9 - 7;
    ll sum = 0;
    loop(i,0,n){
        sum += a[i];
        cout << sum << " ";
        limit = max(limit,sum);
        cout << limit << " "; 
        sum = max(sum,0ll);  
        cout << sum << endl;  
    }
    cout << limit;
    return 0;
}