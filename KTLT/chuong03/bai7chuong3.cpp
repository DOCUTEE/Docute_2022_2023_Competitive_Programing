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
int fibo(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibo(n-1)+fibo(n-2);
}
signed main(){
    fast();
    int n;
    cin >> n;
    cout << fibo(n) << endl;
    return 0;
}