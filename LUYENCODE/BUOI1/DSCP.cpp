#include <bits/stdc++.h>
using namespace std;
int main(){
    long long L,R;
    cin >> L >> R;
    long long res = sqrt(R);
    cout << (res - ceil(sqrt(L))) + 1;
}