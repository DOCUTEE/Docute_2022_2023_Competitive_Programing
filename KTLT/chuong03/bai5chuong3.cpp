#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}
double cal(double n){
    double sum = 1, temp = 1;
    for(double i = 1; i <= n; i++){
        temp *= i;
        sum += 1/temp;
    }
    return sum;
}
signed main(){
    fast();
    int n;
    cin >> n;
    cout << fixed << setprecision(2) <<cal(n) << endl;
    return 0;
}