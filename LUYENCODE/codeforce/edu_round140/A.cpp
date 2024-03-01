#include <bits/stdc++.h>
using namespace std;
#define loop(i, a, n) for (int i = a; i <= n; i++)
const int int_max = 1e9 + 7;
typedef long long ll;
ll t,x[4],y[4],a[4],b[4];
int post,dem;
bool check,temp;
string result[100005];
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--){
        check = true;
        temp = false;
        post = 0;
        loop(i,1,3) cin >> x[i] >> y[i];
        a[1] = x[1] - x[2]; b[1] = y[1] - y[2]; 
        a[2] = x[1] - x[3]; b[2] = y[1] - y[3];
        a[3] = x[2] - x[3]; b[3] = y[2] - y[3];
        loop(i,1,3) if (a[i] == 0){
            post = i;
            temp = true;
        }
        if (temp) loop(i,1,3) if (b[i] == 0 && i != post) check = false;
        dem++;
        result[dem] = (check) ? "YES" : "NO"; 
    }
    loop(i,1,dem) cout << result[i] << endl;
    return 0;
}