#include <bits/stdc++.h>
using namespace std;
queue<int>res;
void check(int q){
    int temp;
    if (q == 1){
        cin >> temp;
        res.push(temp);
    }
    else if (q == 2) {
        if (res.size() >0) res.pop();
    }
        else {
            if (res.size() == 0) cout << "Empty!" << endl;
            else cout << res.front() << endl;
            
        }
}
int main(){
    int t,q;
    cin >> t;
    while (t--){
        cin >> q;
        check(q);
    }
}