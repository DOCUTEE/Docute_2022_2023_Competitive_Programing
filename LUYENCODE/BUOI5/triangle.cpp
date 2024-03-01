#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--){
        cin >> a >> b >> c >> d >> e >> f;
        long long check1 = a*b;
        long long check2 = c*d;
        long long check3 = e*f;
        long long check = check1 * check2 *check3;
        if (check1*check2 < 0 || check2*check3 < 0 ||check1*check3 < 0){
            if (check)
        }
        if (check1*check2*check3 <= 0) cout << 4 << endl;
        else cout << 1;
    }
}
