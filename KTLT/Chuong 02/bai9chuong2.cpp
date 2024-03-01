#include<bits/stdc++.h>
using namespace std;
#define int long long

void import(int &n){
    cin >> n;
}
vector<char> convert_10(int n, int x){
    vector<char>temp;
    vector<char>add = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    while (n > 0){
        temp.push_back(add[n % x]);
        n /= x;
    }
    reverse(temp.begin(), temp.end());
    return temp;
}
void exp(vector<char> a){
    for(auto x : a) cout << x;
    cout << endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    import(n);
    vector<char>result;
    result = convert_10(n,2); 
    exp(result);
    result = convert_10(n,8); 
    exp(result);
    result = convert_10(n,16);
    exp(result);
    return 0;
}
