#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t,x,y,n;
    cin >> t;
    while (t--){
        cin >> n;
        if (n % 2){
            cout << 1 <<" ";
            for(int i = 2; i <= n; i++){
                if (i % 2 == 0) cout << i+1 <<" ";
                else cout << i-1 <<" ";  
            }
        }
        else {
            for (int i = 1; i <= n; i++){
                if(i % 2) cout << i+1 <<" ";
                else cout << i-1 << " ";
            }
        }   
        cout << endl;     
    }
}