#include <bits/stdc++.h>
using namespace std;
bool check(long long n){
    while(n % 2 == 0){
        n /= 2;
    }
    return (n > 1);
}
int main(){
    long long t,x,y,n;
    cin >> t;
    while (t--){
        cin >> n;
        cout << (string)((check(n)) ? "YES" : "NO") << endl;     
    }
}