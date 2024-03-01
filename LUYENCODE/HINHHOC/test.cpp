#include <bits/stdc++.h>
using namespace std;
signed main(){
    int a,b;
    cin >> a >> b;
    cout << (string)((a % 2 && b % 2) ? "Odd" : "Even");
    return 0;
}