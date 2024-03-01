#include <bits/stdc++.h> 
using namespace std;
#define loop(i,a,n) for(int i = a; i < n; i++)
int check[1005],a[1005][1005],n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    loop(i,0,n) loop(j,0,n) cin >> a[i][j];
    loop(i,0,n-1) loop(j,i+1,n) 
    if (a[i][j] > a[0][0]) check[j]++;
    else check[i]++;
    loop(i,0,n) cout << check[i]+1 << " ";
}