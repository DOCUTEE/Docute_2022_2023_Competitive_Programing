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