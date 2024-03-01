#include <bits/stdc++.h>
using namespace std;
long long a[100005],query[100005],k,n;
void import(){
    cin >> n;
    a[0] = -10000000000000;
    for(int i = 1; i <= n; i++) cin >> a[i];
    a[n+1] = 10000000000000;
}
int checkleft(int left, int right ,int x){
    int mid = (left+right)/2;
    if (left == right) return left;
    if ((right - left) == 1) return (a[right] <= x) ? right : left;
    if (a[mid] > x) return checkleft(left,mid-1,x);
    else return checkleft(mid,right,x);
}
int checkright(int left, int right ,int x){
    int mid = (left+right)/2;
    if (left == right) return left;
    if ((right - left) == 1) return (a[left] >= x) ? left : right;
    if (a[mid] >= x) return checkright(left,mid,x);
    else return checkright(mid+1,right,x);
}
void solve(){
    long long x,y;
    cin >> k;
    sort(a,a+n+1);
    for(int i = 1; i <= k; i++){
        cin >> x >> y;
        cout << checkleft(0,n+1,y) - checkright(0,n+1,x) +1 << "\n";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    import();
    solve();
}