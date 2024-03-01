#include <bits/stdc++.h>
double temp,x,y,k,n,q;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> q;
    while (q--){
        double max = 0;
        cin >> n >> k >> x >> y;
        for (int i = 0; i < n; i++){
            cin >> temp;
            if (temp >= max) max = temp;  
        }
        if ((max/x) <= k) cout << (int)ceil(max/x) << endl;
        else cout << (int) ceil((max-k*x+k*y)/y) << endl;
    }
    return 0;
}