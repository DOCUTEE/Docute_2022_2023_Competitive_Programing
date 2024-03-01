#include <bits/stdc++.h>
using namespace std;

#define int long long

void import(int &n, vector<int> &a)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void request_ins(int &pos, int &value)
{
    cin >> pos >> value;
}
void ins(int pos, int value, vector<int> &a, int &n)
{
    n++;
    for (int i = n - 1; i > pos; i--)
        a[i] = a[i - 1];
    a[pos] = value;
}
void request_del(int &pos)
{
    cin >> pos;
}
void del(int pos, vector<int> &a, int &n)
{
    n--;
    for (int i = pos; i < n; i++)
        a[i] = a[i + 1];
}
void request_find(int &pos){
    cin >> pos;
}
int binary_search(const vector<int> a,int n, int value)
{
    int l = 0, r = n - 1;
    while (l != r)
    {
        int mid = (l + r) / 2;
        if (value > a[mid])
            l = mid + 1;
        else
            r = mid;
    }
    return l;
}
void exp_search(const vector<int>a, int val, int pos){
    if (a[pos] == val) cout << pos;
    else cout << "-1";
    cout << "\n";
}
void exp(vector<int> a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, x, pos;
    vector<int> a(1000000);
    import(n, a);
    request_ins(pos, x);
    ins(pos, x, a, n);
    exp(a, n);
    request_del(pos);
    del(pos, a, n);
    exp(a, n);
    request_find(x);
    pos = binary_search(a,n,x);
    exp_search(a,x,pos);
}