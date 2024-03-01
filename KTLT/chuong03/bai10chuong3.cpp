#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}
void import(int &n, vector<int> &v, int &k){
    cin >> n;
    v.resize(n);
    for(int &x: v) cin >> x;
    cin >> k;
}
int group(char a){
    if (a >= 'a' && a <= 'z') return 0;
    else if (a >= 'A' && a <= 'Z') return 1;
        else if (a >= '0' && a <= '9') return 2;
            else return 3;
}
bool compare(int x, int y){
    return x > y;
}
signed main(){
    fast();
    string S;
    getline(cin, S);
    vector<int>result(5);
    for(auto x: S) result[group(x)]++;
    for(int i = 0; i < 4; i++) cout << result[i] << " ";
    return 0;
}