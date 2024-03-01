#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}
int cal(int n){
    int sum = 0, temp = 1;
    for(int i = 1; i <= n; i++){
        temp *= i;
        sum += temp;
    }
    return sum;
}
signed main(){
    fast();
    int n;
    cin >> n;
    cout << cal(n) << endl;
    return 0;
}