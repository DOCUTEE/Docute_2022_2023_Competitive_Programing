#include<bits/stdc++.h>

using namespace std;

int const inf = 1e9 + 7;

void build(int id, int left, int right) {
    if (left == right) {
        st[id] = a[left];
        return;
    }

    int mid = (left + right)/2;

    build(id * 2, left, mid);
    build(id * 2 + 1, mid + 1, right);

    st[id] = min(st[id * 2], st[id * 2 + 1]);
    return;
}

int get(int id, int left, int right, int u, int v) {
    if (u > right || v < left)
        return inf;
    
    if (left >= u && v <= right) 
        return st[id];

    int mid = (left + right)/2;

    int get1 = get(id * 2, left, mid, u, v);
    int get2 = get(id * 2 + 1, mid + 1, right, u, v);

    return min(get1, get2);
}

int main() {
    cin >> n; 
    for (int i = 1; i <= n; i++) cin >> a[i];
    build(1, 1, n);
    cout << get(1, 1, n, 1, 3);
    return 0;
}