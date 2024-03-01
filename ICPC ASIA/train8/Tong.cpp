#include <bits/stdc++.h>
using namespace std;
#define loop(i,a,n) for(int i = 0; i < n;i++)
int x,n,a[50000],q,pos,l,r;
long long result;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    loop(i,0,n) cin >> a[i];
    cin >> q;
    sort(a,a+n);
    while (q--){
        cin >> x;
        l = 0; 
        r = n-1;
        result = 0;
        while (r > l){
        if ((a[l] + a[r]) <= x){
            result += (r - l);
            l++;
        }
        else while((a[l] + a[r]) > x){
            r--;
        }
        }
        cout << result << endl;
    }
}