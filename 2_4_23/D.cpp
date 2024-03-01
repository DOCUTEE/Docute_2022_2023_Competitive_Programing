#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t,x,y;
    cin >> t;
    while (t--){
        cin >> x >> y;
        cout << (string)((x - y <= 1) ? "NO" : "YES") << "\n"; 
    }
}