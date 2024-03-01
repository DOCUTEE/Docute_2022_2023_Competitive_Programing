#include<bits/stdc++.h>
using namespace std;

#define int long long

struct fraction{
    int up;
    int down;
};
void shorter(fraction &a){
    int temp = __gcd(abs(a.up), abs(a.down));
    a.up /= temp;
    a.down /= temp;
}
void import(int &n, vector<fraction>&a){
    cin >> n;
    a.resize(n);
    for(auto &x: a){
        cin >> x.up >> x.down;
        x.up = x.up*(x.down/abs(x.down));
        x.down = abs(x.down);
        shorter(x);
    }
}
fraction findMax(int n,vector<fraction>a){
    fraction result;
    result.up = a[0].up*(a[0].down/abs(a[0].down));
    result.down = abs(a[0].down);
    for(auto x: a){
        fraction temp;
        temp.up = x.up;
        temp.down = x.down;
        x.up = x.up*(x.down/abs(x.down));
        x.down = abs(x.down);
        if(result.down*x.up > result.up*x.down){
            result.up= temp.up;
            result.down = temp.down;
        }
    }
    return result;
}
fraction Sum(fraction a, fraction b){
    fraction result;
    int up = a.up*b.down + a.down*b.up;
    int down = a.down*b.down;
    int temp = __gcd(abs(up), abs(down));
    return {up/temp, down/temp};
}
fraction multi(fraction a, fraction b){
    int up = a.up*b.up;
    int down = a.down*b.down;
    int temp = __gcd(abs(up), abs(down));
    return {up/temp, down/temp};
}
fraction findSum(int n,vector<fraction>a){
    fraction result = {0,1}; 
    for(auto x: a){
        result = Sum(result, x);
    }
    return result;
}
fraction multiSum(int n,vector<fraction>a){
    fraction result = {1,1};
    for(auto x: a){
        result = multi(result,x);
    }
    return result;
}
void rever(vector<fraction>&a){
    for(auto &x: a){
        swap(x.up,x.down);
        x.up = x.up*(x.down/abs(x.down));
        x.down = abs(x.down);
        shorter(x);
    }
}
void show(int n,vector<fraction>a){
    for(int i =0; i < n-1; i++) cout << a[i].up << " "<< a[i].down <<" ";
    cout << a[n-1].up << " " << a[n-1].down;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    vector<fraction>a;
    import(n,a);
    fraction result = findMax(n,a);
    cout << result.up << " " << result.down << endl;
    result = findSum(n,a);
    cout << result.up << " " << result.down << endl;
    result = multiSum(n,a);
    cout << result.up << " " << result.down << endl;
    rever(a);
    show(n,a);
}