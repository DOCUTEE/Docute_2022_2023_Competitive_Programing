#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(int i = a; i <= n; i++)
ll n,f0,d,f1,f2,x[1005],y[1005];
bool check[1005],check1[1005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> f0 >> d;
    loop(i,1,n) cin >> x[i] >> y[i];
    d = d*d;
    check[f0] = true;
    loop(i,1,n)
    if (check[i] == false)
        if (((x[i]-x[f0])*(x[i]-x[f0]) + (y[i]-y[f0])*(y[i]-y[f0])) < d) {
            check[i] = true;
            f1++;
        }
    loop (i,1,n)
    if (i != f0 && check[i] == true){
        loop(j,1,n) 
        if (check1[j] == false && check[j] == false && j != f0) 
            if (((x[j]-x[i])*(x[j]-x[i]) + (y[j]-y[i])*(y[j]-y[i])) < d){
                check1[j] = true;
                f2++;
            }
    }
    cout << f1 << " " << f2;
}