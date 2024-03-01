#include <bits/stdc++.h>
using namespace std;

#define int long long
bool compare(pair<int,int>a, pair<int,int>b){
    return a.first > b.first;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n,k;
    cin >> n >> k;
    vector<pair<int,int>>a(n),d(n),h(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i;
        cin >> d[i].first;
        d[i].second = i;
        cin >> h[i].first;
        h[i].second = i;
    }
    sort(a.begin(),a.begin()+n,compare);
    sort(d.begin(),d.begin()+n,compare);
    sort(h.begin(),h.begin()+n,compare);
    set<int>save;
    for(int i = 0; i < k; i++){
        save.insert(a[i].second);
        save.insert(d[i].second);
        save.insert(h[i].second);
        
    }

    cout << save.size();
}