#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}
double solve(double x){
    double i = 0;
    while (x >= 0){
        i++;
        x -= 1/i;
    }
    return i;
}

signed main(){
    fast();
    double a;
    cin >> a;
    cout << solve(a) << endl;
    return 0;
}