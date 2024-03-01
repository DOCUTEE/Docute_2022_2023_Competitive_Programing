#include <bits/stdc++.h>
using namespace std;
struct FRACTION {
    int up;
    int down;
}; 
FRACTION easy(FRACTION x) {
    if (x.up == 0) x.down = 1;
    else 
    {
        int temp = __gcd(abs(x.up), abs(x.down));
        x.up /= temp;
        x.down /= temp;
    }
    return x;
}
void make_equal(FRACTION &a, FRACTION &b) {
    int lcm = (a.down * b.down) / __gcd(a.down, b.down);
    a.up *= lcm / a.down;
    a.down = lcm;
    b.up *= lcm / b.down;
    b.down = lcm;
}
FRACTION add(FRACTION a, FRACTION b) {
    make_equal(a, b);
    FRACTION result;
    result.up = a.up + b.up;
    result.down = a.down;
    return easy(result);
}
FRACTION subtract(FRACTION a, FRACTION b) {
    make_equal(a, b);
    FRACTION result;
    result.up = a.up - b.up;
    result.down = a.down;
    return easy(result);
}
FRACTION multiply(FRACTION a, FRACTION b) {
    FRACTION result;
    result.up = a.up * b.up;
    result.down = a.down * b.down;
    return easy(result);
}
FRACTION divide(FRACTION a, FRACTION b) {
    FRACTION result;
    result.up = a.up * b.down;
    result.down = a.down * b.up;
    return easy(result);
}
int compare(FRACTION a, FRACTION b) {
    make_equal(a, b);
    if (a.up > b.up) return 1;
    if (a.up < b.up) return -1;
    return 0;
}
void show(FRACTION sum, FRACTION diff, FRACTION product,FRACTION split, FRACTION a, FRACTION b){
    cout << sum.up << " " << sum.down << endl;
    cout << diff.up << " " << diff.down << endl;
    cout << product.up << " " << product.down << endl;
    if (b.up == 0) cout << "-1" << endl;
        else cout << split.up << " " << split.down << endl;
    FRACTION simplified1 = easy(a);
    FRACTION simplified2 = easy(b);
    cout << simplified1.up << " " << simplified1.down << endl;
    cout << simplified2.up << " " << simplified2.down << endl;
    make_equal(a,b);
    cout << a.up << " " << a.down << endl;
    cout << b.up << " " << b.down << endl;
    int comparison = compare(a, b);
    if (comparison == 1) cout << "1" << endl;
        else if (comparison == -1) cout << "-1" << endl;
            else cout << "0" << endl;
}
int main(){
    FRACTION a, b;   
    cin >> a.up >> a.down;
    cin >> b.up >> b.down;
    FRACTION sum = add(a, b);
    FRACTION diff = subtract(a, b);
    FRACTION product = multiply(a, b);
    FRACTION split = divide(a, b);
    show(sum,diff, product, split, a,b );
    return 0;
}
