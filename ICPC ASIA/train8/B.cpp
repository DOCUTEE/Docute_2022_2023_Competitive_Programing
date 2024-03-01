#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i, a, n) for (int i = a; i < n; i++)
ll n,i,cnt,l[500005],r[500005];
char a[500005];
long long result;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    loop(i, 0, n) cin >> a[i];
    char check =  'A'; 
    i = 0;
    cnt = 0;
    while (i < n){
        if (a[i] != check){
            l[i] = cnt;
            cnt = 1;
            check = a[i];
        } else cnt++;
    i++;
    }
    i = n - 1;
    cnt = 0;
    check = 'A';
    while (i >= 0){
        if (a[i] != check){
            r[i] = cnt; 
            cnt = 1;
            check = a[i];
        } else cnt++;
    i--;
    } 
    loop(i,0,n) cout << l[i] << " " << r[i] << endl;
    loop(i,0,n) result += (l[i]*r[i] + max(l[i] - 1, 0ll) + max(r[i] - 1,0ll));
    cout << result;
    return 0;
}