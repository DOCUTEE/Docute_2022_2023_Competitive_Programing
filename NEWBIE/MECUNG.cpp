#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    long long n, k, row, col;
    cin >> n >> k;
    vector <int> num(n, 3);
    for (int i = 0; i<k; i++){
        cin >> row >> col; 
        num[col-1] = num[col-1] -  1;
    }
    long long result=1;
    for (long long i = 0 ; i<n; i++){
        result *= num[i];
    }
    cout << result << endl;
    return 0;
}