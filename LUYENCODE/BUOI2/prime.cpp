#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    freopen("prime.out","w",stdout);
    cin.tie(0);
    cout.tie(0);
    bool check = true;
    int temp;
    for (int i = 3; i <= 1299827; i++){
        check = true;
        temp = ceil(sqrt(i));
        for (int j = 2; j <= temp; j++)
            if ( i % j == 0){
                check = false;
                break;
            }
        if (check == true) cout << '"' << i << '"' << ", ";
    }
    return 0;
}