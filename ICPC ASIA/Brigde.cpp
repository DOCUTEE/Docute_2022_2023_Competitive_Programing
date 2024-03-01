#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define loop(i,a,n) for(int i = a; i <= n; i++)
ll n,result;
string first[10005], second[10005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n; 
    loop(i,1,n) cin >> first[i] >> second[i];
    loop(i,1,n){
        result = 1;
        loop(j,0,first[i].size()-1){
            if (first[i][j] == 'X' && second[i][j] == 'X') result = (result * 2) % mod;
            if (first[i][j] == 'O' && second[i][j] == 'O') {
                    result = 0;
                    break;
                }
            }
        cout << result << endl;
    }
}