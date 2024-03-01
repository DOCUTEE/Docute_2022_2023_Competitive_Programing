#include <bits/stdc++.h>
using namespace std;
long long a[100005],query[100005],k,n;
void import(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= k; i++) cin >> query[i];
}
bool check(int left, int right ,int x){
    int mid = (left+right)/2;
    if (left == right) return (a[left] == x) ? true : false;
    if (a[mid] >= x) return check(left,mid,x);
    else return check(mid+1,right,x);
}
void solve(){
    for(int i = 1; i <= k; i++){
        string result = check(1,n,query[i]) ? "YES" : "NO";
        cout << result << "\n";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    import();
    solve();
}