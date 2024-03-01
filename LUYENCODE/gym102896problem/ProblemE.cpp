#include <bits/stdc++.h>
#include <cmath>
using namespace std;
long long n,a,b;
long long gcd(long long int a, long long int b){
    if (b == 0)
    return a;
    return gcd(b, a % b);
}
long long lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}
long long solve(long long b, long long d){
    long long temp = lcm(b,d) / b;
    long long result = ((b - (b % temp)) / temp);
    if (b % temp == 0) result -= 1;
    return result;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    while (n--){
        cin >> a >> b;
        cout << solve(a,b) << endl;
    }
}