#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(int i = a; i <= n; i++)
ll result,n,q,psum[200005],a[200005];
int l,r;
bool compare(ll a, ll b){
    return a > b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> q;
    loop(i,1,n) cin >> a[i];
    loop(i,1,q){
        cin >> l >> r;
        psum[l]++;
        psum[r+1]--;
    }
    loop(i,1,n) psum[i] += psum[i-1];
    sort(a+1,a+n+1,compare);
    sort(psum+1,psum+n+1,compare);
    loop(i,1,n)
        if (psum[i] != 0) result += a[i]*psum[i];
        else break;
    cout << result;
    return 0;
}