#include <bits/stdc++.h>
using namespace std;
struct Fraction {
    int up;
    int down;
};
struct MIXED {
    int origin;
    Fraction frac;
};
Fraction tofrac(MIXED a) {
    Fraction frac;
    frac.up = a.frac.up + a.origin * a.frac.down;
    frac.down = a.frac.down;
    return frac;
}

MIXED fromfrac(Fraction frac) {
    MIXED a;
    a.origin = frac.up / frac.down;
    a.frac.up = frac.up % frac.down;
    a.frac.down = frac.down;
    return a;
}

MIXED add(MIXED a, MIXED b) {
    Fraction frac1 = tofrac(a);
    Fraction frac2 = tofrac(b);
    Fraction result;
    result.up = frac1.up * frac2.down + frac2.up * frac1.down;
    result.down = frac1.down * frac2.down;
    return fromfrac(result);
}

MIXED multiply(MIXED a, MIXED b) {
    Fraction frac1 = tofrac(a);
    Fraction frac2 = tofrac(b);
    Fraction result;
    result.up = frac1.up * frac2.up;
    result.down = frac1.down * frac2.down;
    return fromfrac(result);
}
void import(MIXED &a, MIXED &b){
    cin >> a.origin >> a.frac.up >> a.frac.down;
    cin >> b.origin >> b.frac.up >> b.frac.down;
}
void show(MIXED sum, MIXED product) {
    cout << sum.origin << " " << sum.frac.up << " " << sum.frac.down << endl;
    cout << product.origin << " " << product.frac.up << " " << product.frac.down << endl;
}
int main() {
    MIXED a,b;
    import(a,b);
    MIXED sum = add(a, b);
    MIXED product = multiply(a, b);
    show(sum,product);
    return 0;
}
