#include <bits/stdc++.h>
using namespace std;
long long a,b,n,temp,result,k;
bool test = true;
const long long mod = 1e9 + 7;
vector<long long>gt;
#define loop(i,a,n) for(int i = a; i <= n; i++)
void giaithua(long long n){
    gt.push_back(1);
    temp = 1;
    for (int i = 1; i <= n; i++){
        temp = (temp * i) % 1000000000;
        gt.push_back(temp);
        //cout << temp <<" ";
    }
}
void check(long long res){
    test = true;
    //cout << res << " ";
    while (res != 0 || test != false){
        long long temp = res % 10;
        if (temp != a && temp != b) test = false;
        //cout << res << ",";
        res /= 10;
    }    
    cout << test << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> a >> b >> n;
    long long j = b - a;
    giaithua(n);
    for (int i = a*n; i <= b*n; i+=j){
        check(i);
        if (test == true) result = (result + (gt[n]/(gt[n-k]*gt[k]))) % 1000000000;
        k++;
    }
    cout << result % mod;
    return 0;
}