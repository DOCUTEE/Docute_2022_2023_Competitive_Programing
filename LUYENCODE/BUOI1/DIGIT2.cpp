#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,a,result = 1;
    cin >> n >> a;
    n = n % 10;
    for (int i = 0; i < a; i++) result = (result * n) % 10;
    cout << result % 10;
    return 0;
}