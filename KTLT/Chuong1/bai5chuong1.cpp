#include <bits/stdc++.h>
using namespace std;
struct COMPLEX {
    double real;
    double fake;
};
COMPLEX add(COMPLEX c1, COMPLEX c2) {
    COMPLEX result;
    result.real = c1.real + c2.real;
    result.fake = c1.fake + c2.fake;
    return result;
}
COMPLEX subtract(COMPLEX c1, COMPLEX c2) {
    COMPLEX result;
    result.real = c1.real - c2.real;
    result.fake = c1.fake - c2.fake;
    return result;
}
COMPLEX multiply(COMPLEX c1, COMPLEX c2) {
    COMPLEX result;
    result.real = c1.real * c2.real - c1.fake * c2.fake;
    result.fake = c1.real * c2.fake + c2.real * c1.fake;
    return result;
}
void show(COMPLEX a, COMPLEX b, COMPLEX c){
    cout << a.real <<" "<< a.fake << endl;
    cout << b.real <<" "<< b.fake << endl;
    cout << c.real <<" "<< c.fake << endl;
}
int main() {
    COMPLEX c1, c2;
    cin >> c1.real >> c1.fake;
    cin >> c2.real >> c2.fake;
    COMPLEX sum = add(c1, c2);
    COMPLEX diff = subtract(c1, c2);
    COMPLEX product = multiply(c1, c2);
    show(sum,diff,product);
    return 0;
}

