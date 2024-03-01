#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(int i = a; i <= n; i++)
ll n,sum;
int tree[100005*4],a[100005],b[100005],check,l,r,d,t,temp;
vector<pair<int,int>>visit(100005*4);
void build(int id, int left, int right){
    if (left == right){
        tree[id] = a[left];
        return;
    }
    int mid = (left + right)/2;
    build(id*2,left,mid);
    build(id*2+1,mid+1,right);
    tree[id] = tree[id*2] + tree[id*2+1];
    visit[id].first = left;
    visit[id].second = right;
}
void update(int id, int left, int right, int u, int v, int val){
    if (u > right || v < left) return; 
    if (left == right){
        tree[id] += min(b[visit[id].first] - tree[id], val);
        return;
    }
    int mid = (left + right) / 2;
    update(id*2,left, mid, u,v,val);
    update(id*2+1, mid+1, right, u ,v, val);
    tree[id] = tree[id*2] + tree[id*2+1]; 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    loop (i,1,n) cin >> a[i] >> b[i];
    cin >> t;
    while (t--){
        cin >> check;
        long long sum = 0;
        if (check == 0){
            cin >> l >> r >> d;
        }
        else {
            cin >> l >> r;
        }
    }
}