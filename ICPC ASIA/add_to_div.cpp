#include <bits/stdc++.h>
using namespace std;
long long a,b;
int main(){
    cin >> a >> b;
    if (a == b) cout << 0;
    else if (b % a == 0 || a % b == 0) cout << abs(a - b);  
    else cout << abs((a*b)/__gcd(a,b) - (a+b));
    return 0;
}