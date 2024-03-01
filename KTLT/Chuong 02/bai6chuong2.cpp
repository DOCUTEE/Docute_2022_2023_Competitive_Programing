#include <bits/stdc++.h>
using namespace std;

#define int long long

void import(int &n, vector<int> &a, vector<int>&b)
{
    cin >> n;
    a.resize(n);
    b.resize(n);
    for(auto &x: a) cin >> x;
    for(auto &x: b) cin >> x;    
}
vector<int> convert(int n,const vector<int>a, const vector<int>b){
    vector<int>temp;
    for(int i = 0; i < n; i++){
        temp.push_back(a[i]);
        temp.push_back(b[i]);
    }
    return temp;
}
void exp(vector<int>c){
    for(auto x: c) cout << x <<" ";
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    vector<int>a,b;
    import(n,a,b);
    vector<int>c = convert(n,a,b);
    exp(c);
    return 0;
}