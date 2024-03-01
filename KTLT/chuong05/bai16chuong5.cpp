#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

vector<pair<int,int>>tree(400005);
vector<int>a(100005);
const int inf = 1e18;
int n;
void build(int id, int l, int r)
{
    if (l == r)
    {
        tree[id].first = a[l];
        tree[id].second = a[l];
        return;
    }
    int mid = (l + r) / 2;
    build(id*2,l,mid);
    build(id*2+1,mid+1, r);
    tree[id].first = max(tree[id*2].first, tree[id*2+1].first);
    tree[id].second = min(tree[id*2].second, tree[id*2+1].second);
}
int getmax(int id, int l, int r, int u, int v)
{
    if (l > v || r < u) return -inf;
    if (l >= u && r <= v) return tree[id].first;
    int mid = (l+r)/2;
    return max(getmax(id*2, l, mid, u,v),getmax(id*2+1, mid+1, r, u,v));
}
int getmin(int id, int l, int r, int u, int v)
{
    if (l > v || r < u) return inf;
    if (l >= u && r <= v) return tree[id].second;
    int mid = (l+r)/2;
    return min(getmin(id*2, l, mid,u,v), getmin(id*2+1, mid+1, r, u,v));
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); 
    //cout << "hello" << endl;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    build(1,1,n); 
    int l = 1, r = 1;
    int result = 1;
    while (r <= n)
    {
        if (getmax(1,1,n,l,r) - getmin(1,1,n,l,r) <= 1)
        {
            result = max(r-l+1, result);
            r++;
        } 
        else l++;
    }
    cout << result << endl;
}