#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(int i = a; i <= n; i++)
ll result[100005];
ll pos,temp,n,m,k,l,r,res;
vector <ll> a,b;
ll min(ll a, ll b){
    return a < b ? a : b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    loop(i,1,n){
        cin >> temp;
        a.push_back(temp);
    }
    loop(i,1,n){
        cin >> temp;
        b.push_back(temp);
    }
    sort (b.begin(),b.end());
    loop(i,0,n-1){
            result[i] = 100000000000000;
            pos = lower_bound(b.begin(),b.end(),a[i]) - b.begin();
            if (pos == 0) result[i] = min(result[i],abs(a[i] - b[pos]));
            else if (pos == n) result[i] = min(result[i],abs(a[i] - b[pos-1]));
                else {
                        temp = min(abs(a[i] - b[pos]),abs(a[i] - b[pos-1]));
                        result[i] = min(temp,result[i]);
                }
        }
    res = 10000000000000;
    loop(i,0,n-1) res = min(res,result[i]);
    cout << res << endl;
}