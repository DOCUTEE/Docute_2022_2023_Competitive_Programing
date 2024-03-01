#include <bits/stdc++.h>
using namespace std;
long long a[100005],query[100005],k,n;
void import(){
    cin >> n >> k;
    a[0] = -10000000000000;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= k; i++) cin >> query[i];
}
int check(int left, int right ,int x){
    int mid = (left+right)/2;
    if (left == right) return left;
    if ((right - left) == 1) return (a[right] <= x) ? right : left;
    if (a[mid] > x) return check(left,mid-1,x);
    else return check(mid,right,x);
}
void solve(){
    for(int i = 1; i <= k; i++){
        cout << check(0,n,query[i])<< "\n";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    import();
    solve();
}