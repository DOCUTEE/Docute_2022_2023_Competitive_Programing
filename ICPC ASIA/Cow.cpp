#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(int i = a; i < n; i++)
ll n,S;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> S;
    cout << ((n+1)*n/2) - S;
}