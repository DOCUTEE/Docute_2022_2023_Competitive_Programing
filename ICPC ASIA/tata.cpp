#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(int i = a; i < n; i++)
ll n,sum,temp,dem,d;
vector<pair<ll,ll>>a(100005);
bool compare(pair<ll,ll> x, pair <ll,ll> y){
    if (x.first != y.first) return x.first > y.first;
    else return x.second > y.second;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    loop(i,0,n){ 
        cin >> a[i].first >> a[i].second;
        sum += a[i].first;
    }
    cin >> d;
    sort(a.begin(),a.end(),compare);
    for(int i = n-1; i >= 0; i--)f{
        if ((sum + a[i].second) >= d){
            dem++;
            sum -= a[i].first;
        }
    }
    cout << dem;
    return 0;
}