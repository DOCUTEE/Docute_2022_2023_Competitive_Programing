#include <bits/stdc++.h>
using namespace std;
#define loop(i,a,n) for(int i = a; i < n; i++)
int n = 1;
char temp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    while (n != 0){
        int dem = 0;
        cin >> n;
        int a[n+1],b[n+1],result[n+1];
        loop(i,0,n){
            cin >> temp;
            a[i] = temp - '0';
        }
        loop(i,0,n){
            cin >> temp;
            b[i] = temp - '0';
        }
        loop(i,0,n){
            cin >> temp;
            result[i] = temp - '0';
        }
        int miss = 0;
        for(int i = n-1; i >= 0; i--){
            bool check = (((a[i] + b[i] + miss) % 10) == result[i]) ? true : false;
            miss = (a[i] + b[i] + miss) / 10;
            if (!check) dem++;
        }
        if (n) cout << dem << endl;
    }
}