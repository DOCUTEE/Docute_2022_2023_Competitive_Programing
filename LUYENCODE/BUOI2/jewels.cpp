#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string S,pearl,result; 
int n,k,found;
#define loop(i, a, n) for (int i = a; i < n; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> k;
    cin >> S;
    loop(i,0,n-1) S += S[i];
    while (k--){
        cin >> pearl;
        found = S.find(pearl);
        result = (found >= 0 && found < n) ? "YES" : "NO";
        cout << result << endl;
    }
    return 0;
}
