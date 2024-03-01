#include <bits/stdc++.h>
using namespace std;
#define loop(i, a, n) for (int i = a; i <= n; i++)
const int int_max = 1e9 + 7;
typedef long long ll;
ll t,a[1000005],n,result,temp;
int post,dem;
bool check;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--){
        cin >> n;
        loop(i,1,n) cin >> a[i];
        result = a[1];
        sort(a+2,a+n+1);
        loop(i,1,n) if(a[i] > result){
            temp = a[i] + result;
            result = (ll)ceil((double)(temp)/(double)(2));
        }
        cout << result << endl;
    }
    return 0;
}