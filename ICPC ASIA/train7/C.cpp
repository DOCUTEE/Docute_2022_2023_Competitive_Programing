#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i, a, n) for (int i = a; i < n; i++)
vector<int>dem(500005);
int n,a[500005],l,r;
ll result;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    loop(i,0,n) cin >> a[i];
    while (r < n){
        dem[a[r]]++;
        while (dem[a[r]] == 3){
            dem[a[l]]--;
            l++;
        }
        result += (r - l+1);
        r++;
    }
    cout << result;
}