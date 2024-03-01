#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}
double cal(double x, double n){
    double sum = 1, temp = 1;
    for(double i = 1; i <= n; i++){
        temp = temp*(x/i);
        sum += temp;
    }
    return sum;
}
signed main(){
    fast();
    double n,x;
    cin >> x >> n;
    double result = cal(x, n);
    if (result - (int)result == 0) cout << (int)result;
    else cout << fixed << setprecision(2) << result;
    return 0;
}1