#include <bits/stdc++.h>
using namespace std;
int check(string I, string P){
    int count = 0;
    for (int i = 0; i < P.length(); i++){
        if (P[i] == I[count]) count++;
    }
    if (count == I.length()) return (P.length()-I.length());
    else return -1;
}
int main(){
    int T,j = 0;
    cin >> T;
    string I,P;
    while (T--) {
        cin >> I >> P;
        j++;
        int res = check(I,P);
        if( res == -1) cout << "Case #" << j <<": "<< "IMPOSSIBLE" << endl;
        else cout << "Case #" << j <<": "<< res <<endl;
    }
    return 0;
}