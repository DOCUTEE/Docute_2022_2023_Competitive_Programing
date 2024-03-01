#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}
long double cal(long double x, long double n){
    long double sum = 1.0, temp = 1.0;
    for(int i = 1; i <= n; i++){
        temp = temp*x/i;
        sum += temp;
    }
    return sum;
}
signed main(){
    fast();
    long double n,x;
    cin >> n >> x;
    long double result = cal(x, n);
    cout << fixed << setprecision(2) << result;
    return 0;
}