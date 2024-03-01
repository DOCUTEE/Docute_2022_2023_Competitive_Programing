#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll int_max = 1e9+7; 
#define loop(i,a,n) for(ll i = a; i <= n; i++)
int u,v,n,tree[4000005],a[1000005],q,check,f,s;
void build(int id, int left, int right){
    if (left == right){
        tree[id] = a[left];
        return;
    }
    int mid = (left + right)/2;
    build(id*2,left,mid);
    build(id*2+1,mid+1,right);
    tree[id] = max(tree[id*2],tree[id*2+1]);
}
int get(int id, int left, int right, int u, int v){
    if (left >= u && right <= v) return tree[id];
    if (left > v || right < u) return -int_max;
    int mid = (left + right)/2;
    return max(get(id*2,left,mid,u,v),get(id*2+1,mid+1,right,u,v));    
}
void update(int id, int left, int right, int i, int x) {
    if (i < left || right < i) return;
    if (left == right) {
        tree[id] = x;
        return;
    }
    int mid = (left + right) / 2;
    update(id*2, left, mid, i, x);
    update(id*2 + 1, mid+1, right, i, x);
    tree[id] = max(tree[id*2], tree[id*2 + 1]);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> q;
    loop(i,1,n) cin >> a[i];
    build(1,1,n);
    while (q--){
        cin >> check >> f >> s;
        if (check == 1) update(1,1,n,f,s);
        if (check == 2) cout << get(1,1,n,f,s) << " ";
    }
    return 0;
}