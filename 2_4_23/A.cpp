#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    if (n % 2) cout << 9 << " " << (n-9);
    else cout << 4 << " " <<(n-4);
}