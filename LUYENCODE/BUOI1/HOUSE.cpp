#include <bits/stdc++.h>
using namespace std;
int check(int n, string txt){
    int tap = 1, res = 0; 
    for(int i = 0; i<n; i++)
        if (txt[i] == txt[i+1]) tap++;
        else {
            res += tap/2;
            tap = 1;
        }
    return res;
}
int main(){
    int n;
    string txt;
    cin >> n;
    cin >> txt;
    cout << check(n,txt);
    return 0;
}