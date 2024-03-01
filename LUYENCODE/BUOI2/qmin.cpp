#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const ll int_max = 10000000007;
#define loop(i,a,n) for(int i = a; i <= n; i++)
int n,q,u,v;
ll a[1000005],tree[1000005*4];
void build(int id, int left, int right){
    if (left == right){
        tree[id] = a[left];
        return;
    }
    int mid = (left + right) / 2;
    build(id*2,left,mid);
    build(id*2+1, mid + 1, right);
    tree[id] = min(tree[id*2], tree[id*2+1]);
}
ll get(int id, int left, int right, int u, int v){
    if (u > right || v < left) return int_max;
    if (u <= left && v >= right) return tree[id];
    int mid = (left + right) / 2;
    return min(get(id*2,left,mid,u,v), get(id*2+1,mid+1,right,u,v));
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> q;
    loop(i,1,n) cin >> a[i];
    build(1,1,n);
    loop(i,1,2*n) cout << tree[i] << " ";
    while (q--){
        cin >> u >> v;
        cout << get(1,1,n,u,v) << " ";
    }
}