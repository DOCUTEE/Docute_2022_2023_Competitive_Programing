#include <bits/stdc++.h>
using namespace std;

#define int long long

const int inf = 1e9;
bool compare(int a, int b){
    return a > b;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,d;
    cin >> n >> d;
    vector<int>a(n),b(n-1);
    for(auto &x : a) cin >> x;
    int temp;
    cin >> temp;
    for(int i = 0; i < n-1; i++) cin >> b[i]; 
    int result = a[d-1] + temp;
    sort(b.begin(),b.end());
    int pos = upper_bound(b.begin(),b.end(),result - a[d-2]) - b.begin();
    pos--;
    int cnt = d;
    for(int i = d-2; i >= 0;i--){
        if (a[i] + b[pos] <= result) cnt = i+1;
        pos--;
    }
    cout << cnt;
    return 0;
}