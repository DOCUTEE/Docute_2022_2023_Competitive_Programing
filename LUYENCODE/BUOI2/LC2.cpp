#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n,temp;
    cin >> n;
    vector<long long>fibo = {1,1};
    long long f1 = 1;
    long long f2 = 1;
    long long f = f1+f2;
    for (long long i = 2; i <= n; i++){
        f = f1 + f2;
        f1 = f2;
        f2 = f;
        fibo.push_back(f);
        if (f >= n) {
            temp = i;
            break;
        }
    }
    long long result = 0;
    vector<long long>res;
    for (long long i = fibo.size()-1; i >= 1; i--){
        if (n >= fibo[i]) {
            result++;
            res.push_back(fibo[i]);
            n -= fibo[i];
        }
    }
    cout << result << endl;
    for (long long i = 0; i < result; i++) cout << res[i] << " ";
    return 0;
}