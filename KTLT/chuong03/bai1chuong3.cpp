#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}
int power(int x, int p){
    int result = 1;
    for(int i = 0; i < p; i++) result *= x;
    return result; 
}
signed main(){
    fast();
    int x,p;
    cin >> x >> p;
    cout << power(x,p) << endl;
    return 0;
}