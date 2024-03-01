#include <bits/stdc++.h>
using namespace std;
string S;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> S;
    if (S[0] == '-') cout << S.size() - 1;
    else cout << S.size();
    return 0;
}