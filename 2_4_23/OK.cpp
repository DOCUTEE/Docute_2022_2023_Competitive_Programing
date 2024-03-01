#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> save(1e5 + 5);
int n, m;
int q;
vector<int> x(1e5 + 4), y(1e5 + 4), z(1e5 + 4);
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
        if (v == par[v])
            return v;
        return par[v] = find(par[v]);
    }
    void join(int u, int v)
    {
        u = find(u);
        v = find(v);
        if (u == v)
            return;
        if (sz[u] < sz[v])
            swap(u, v);
        par[v] = u;
        sz[u] += sz[v];
    }
    bool same(int u, int v)
    {
        return find(u) == find(v);
    }
    int size(int u)
    {
        return sz[find(u)];
    }
};
vector<int>mid[100005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= m; i++) cin >> save[i].first >> save[i].second;
    cin >> q;
    for (int i = 1; i <= q; i++) cin >> x[i] >> y[i] >> z[i];
    vector<int> l(q + 3, 1), r(q + 3, m);
    int step = log2(m) + 1;
    for (int k = 0; k < step; k++)
    {
        for (int i = 1; i <= q; i++)
        {
            if (l[i] <= r[i])
            {
                int center = (l[i] + r[i]) / 2;
                mid[center].push_back(i);
            }
        }
        DSU dsu(n);
        for (int i = 1; i <= m; i++)
        {
            dsu.join(save[i].first, save[i].second);
            for (int j : mid[i])
            {
                int temp;
                if (dsu.same(x[j], y[j])) 
                    temp = dsu.size(x[j]);
                else 
                    temp = dsu.size(x[j]) + dsu.size(y[j]);
                if (temp >= z[j]) r[j] = i - 1;
                else l[j] = i + 1;
            }
            mid[i].clear();
        }
    }
    for (int i = 1; i <= q; i++) cout << r[i] + 1 << '\n';
}