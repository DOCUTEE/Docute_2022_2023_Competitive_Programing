#include<bits/stdc++.h>
using namespace std;

#define int long long

void import(int &n, vector<int>&a, int &value){
    cin >> n >> value;
    a.resize(n);
    for(int i = 0; i < n; i++) cin >> a[i];
}
int binary_search(int n,const vector<int>a, int value){
    int l = 0, r = n-1;
    while(l != r){
        int mid = (l+r)/2;
        if (value > a[mid]) 
            l = mid+1;
        else r = mid;
    }
    return l;
}

void exp(const vector<int>a, int pos, int value){
    if (a[pos] == value) cout << pos;
    else cout << -1;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,x;
    vector<int>a;
    import(n,a,x);
    int pos = binary_search(n,a,x);
    exp(a,pos,x);
}