#include <bits/stdc++.h>
using namespace std;

#define int long long
#define For(i,a,n) for (int i = a; i <= n; i++)
#define endl "\n"
const int block = 450;

struct ques{
    int l,r,id;
};

bool compare(const ques a, const ques b)
{
    if (a.l/block == b.l/block) return a.r < b.r;
    return a.l/block < b.l/block;
}
int cnt[1000005], a[1000005];
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    For(i,1,n){
        cin >> a[i]; 
        cnt[a[i]]++;
    }
    int sum = 0;
    For(i,0,1000005) sum += cnt[i]*cnt[i]*i;
    vector<ques>q(m+1);
    For(i,1,m){
        cin >> q[i].l >> q[i].r;
        q[i].id = i;
    }
    vector<int>result (m+1);
    sort(q.begin() + 1, q.end(), compare);
    int L = 1, R = n;
    For(i,1,m)
    {
        while (L < q[i].l){
            sum += (-2*cnt[a[L]] + 1)* a[L];
            cnt[a[L]]--;
            L++;
        }
        while (L > q[i].l){
            L--;
            sum += (2*cnt[a[L]] + 1)* a[L];
            cnt[a[L]]++;
        }
        while (R > q[i].r){
            sum += (-2*cnt[a[R]] + 1)* a[R];
            cnt[a[R]]--;
            R--;
        }
        while (R < q[i].r){
            R++;
            sum += (2*cnt[a[R]] + 1)* a[R];
            cnt[a[R]]++;
        }
        result[q[i].id] = sum;
    }
    For(i,1,m) cout << result[i] << endl;
    return 0;
}