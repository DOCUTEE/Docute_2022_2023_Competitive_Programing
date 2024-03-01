#include <bits/stdc++.h>
using namespace std;
double c;
void import(){
    cin >> c;
}
bool check(double x){
    return (x*x + sqrt(x)) >= c;
}
double search(double left, double right){
    for (int i = 1; i < 1000; i++){
        double mid = (left + right) /2;
        if (check(mid)) right = mid;
        else left = mid;
    }
    return left;

}
void solve(){
    cout <<fixed << setprecision(10) << search(0,100000);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    import();
    solve();
    return 0;
}