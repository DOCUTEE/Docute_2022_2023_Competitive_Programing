#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100005];
vector<pair<int,int>>save(100005);
int n,m,t;
int cnt;
struct DSU
{
    vector<int> par, sz;
    DSU(int k)
    {
        par.resize(k + 1);
        for (int i = 1; i <= k; i++)
            par[i] = i;
        sz.assign(k + 1, 1);
    };
    int find(int v)
    {
        if (v == par[v]) return v;
        return par[v] = find(par[v]);
    }
    void join(int u, int v)
    {
        u = find(u);
        v = find(v);
        if (u == v) return;
        if (sz[u] < sz[v]) swap(u, v);
        par[v] = u;
        sz[u] += sz[v];
    }
    bool same(int u, int v){
        return find(u) == find(v);
    }
    int size(int u)
    {
        return sz[find(u)];
    }
};
void solve(){
    int x,y,z;
    cin >> x >> y >> z;
    //Chặt nhị phân
    int l = 1, r = m;
    while(l <= r){
        int mid = (l+r)/2;
        DSU dsu(n);
        for(int i = 1; i <= mid; i++){
            //thêm các cạnh từ 1 đến mid vào đồ thị
            dsu.join(save[i].first,save[i].second);
        }
        int temp;
        //Tính số lượng đỉnh được đi bởi cặp anh em trong đồ thị các cạnh từ 1 đến mid
        if (dsu.same(x,y)) {
            temp = dsu.size(x);
        }
        else temp = dsu.size(x) + dsu.size(y);
        //kiểm tra điều kiện số lượng đỉnh được đi bởi cặp anh em có lớn hơn hoặc bằng z đỉnh hay chưa ?
        if(temp >= z) r = mid-1; //[l,r] --> [l,mid-1]
        else l = mid + 1; //[l,r] --> [mid+1,r]
    }
    cout << r+1 << '\n';
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        cin >> save[i].first >> save[i].second;
    }
    cin >> t;
    while (t--){
        solve();
    }
}