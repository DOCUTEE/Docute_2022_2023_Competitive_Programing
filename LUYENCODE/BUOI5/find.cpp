#include <bits/stdc++.h>
using namespace std;
long long n,k = 1;
bool solve(){
        while (n > 1){
                n = n / 2;
                k *= 2;
                if ((n + k) % 2 == 0) return true;
            } 
    return false; 
}
void find(long long n, long long k){
    long long m = (n+k)/2;
    cout << m << " " <<m-k;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    if (n % 2 == 1) find(n,1);
    else if (solve()) find(n,k);
        else cout <<"-1"; 
    return 0;
}