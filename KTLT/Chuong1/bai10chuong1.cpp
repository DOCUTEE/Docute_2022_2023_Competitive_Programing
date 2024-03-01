#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

struct Fraction{
    int up;
    int down;
};

void import(int &n, vector<Fraction> &a){
    cin >> n;
    a.resize(n);
    for(auto &x: a) cin >> x.up >> x.down;  
}
Fraction Sum(Fraction a, Fraction b){
    Fraction result;
    int up = a.up*b.down + a.down*b.up;
    int down = a.down*b.down;
    int temp = __gcd(abs(up), abs(down));
    return {up/temp, down/temp};
}
Fraction findSum(int n,vector<Fraction>a){
    Fraction result = {0,1}; 
    for(auto x: a){
        result = Sum(result, x);
    }
    return result;
}
Fraction findMax(int n,vector<Fraction>a){
    Fraction result;
    result.up = a[0].up*(a[0].down/abs(a[0].down));
    result.down = abs(a[0].down);
    for(auto x: a){
        Fraction temp;
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
Fraction findMin(int n,vector<Fraction>a){
    Fraction result;
    result.up = a[0].up*(a[0].down/abs(a[0].down));
    result.down = abs(a[0].down);
    for(auto x: a){
        Fraction temp;
        temp.up = x.up;
        temp.down = x.down;
        x.up = x.up*(x.down/abs(x.down));
        x.down = abs(x.down);
        if(result.down*x.up < result.up*x.down){
            result.up= temp.up;
            result.down = temp.down;
        }
    }
    return result;
}
void make_equal(Fraction &a, Fraction &b) {
    int lcm = (a.down * b.down) / __gcd(a.down, b.down);
    a.up *= lcm / a.down;
    a.down = lcm;
    b.up *= lcm / b.down;
    b.down = lcm;
}
bool compare(Fraction a, Fraction b){
    make_equal(a, b);
    return a.up < b.up;
}
void sortFraction(vector<Fraction>&a){
    sort(a.begin(), a.end(),compare);
}
void show(vector<Fraction>a){
    for(auto x: a){
        cout << x.up << " " << x.down << " ";
    }
}
signed main(){
    int n;
    vector<Fraction>a;
    import(n,a);
    Fraction result = findSum(n,a);
    cout << result.up << " " << result.down << endl;
    result = findMax(n,a);
    cout << result.up <<" "<< result.down << endl;
    result = findMin(n,a); 
    cout << result.up << " " << result.down << endl;
    sortFraction(a);
    show(a);
    return 0;
}
