#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin >> t;
    while (t--){
        cin >> n;
        cout << __gcd(n/2,(n/2)*2) << "\n";
    }
}