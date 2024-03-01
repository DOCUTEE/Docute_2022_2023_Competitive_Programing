#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 5e6;
bool check[MAXN+1];
void sang(){
    for(int i = 2; i <= MAXN; i++) check[i] = true;
    for(int i = 2; i <= MAXN; i++){
        if (check[i]){
            for(int j = i*i; j <= MAXN; j+=i) check[j] = false;
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; 
    cin >> n;
    sang();
    int cnt= 0;
    for(int i = 2; i < n; i++) cnt+= check[i];
    cout << cnt;
}