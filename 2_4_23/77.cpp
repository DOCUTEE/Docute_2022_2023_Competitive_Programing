#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t,x,y,n,k,result;
    set<long long>save;
    cin >> t;
    while (t--){
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> x;
            if (x % 2 == 0) save.insert(x);
        }
        result = 0;
        while (save.size()){
            long long temp = *save.rbegin();
            save.erase(temp);
            if (temp % 2 == 0){ 
                save.insert(temp/2);
                result++;
            }
        }
        cout << result << endl;
    }     
}