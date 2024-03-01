#include<bits/stdc++.h>
using namespace std;

struct COMPLEX{
    int real;
    int fake;
};
void import(int &n, vector<COMPLEX>&a){
    cin >> n;
    a.resize(n);
    for(auto &x: a) cin >> x.real >> x.fake;
}
COMPLEX sum(vector<COMPLEX>a){
    COMPLEX result = {0,0};
    for(auto x: a){
        result.real += x.real;
        result.fake += x.fake;
    }
    return result;
}
COMPLEX product(vector<COMPLEX> a, int n){
    COMPLEX result;
    result.real = a[0].real;
    result.fake = a[0].fake;
    for(int i = 1; i < n; i++){
        COMPLEX temp;
        temp.real = result.real;
        result.real = a[i].real*result.real - a[i].fake*result.fake;
        result.fake = a[i].fake*temp.real + a[i].real*result.fake;
    }
    return result;
}
void show(COMPLEX a){
    cout << a.real << " " << a.fake << endl;
}
int main(){
    int n;
    vector<COMPLEX>a;
    import(n,a);
    COMPLEX result = sum(a);
    show(result);
    result = product(a,n);
    show(result);
    return 0;
}