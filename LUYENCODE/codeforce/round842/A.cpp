#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll temp,t;
#define loop(i,a,n) for(int i = a; i <=n; i++)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t; 
    while (t--){
        cin >> temp;
        if (temp > 1) cout << temp - 1 << endl;
        else cout << -1 << endl;
    }
    return 0;    
}
