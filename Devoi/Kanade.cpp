#include<bits/stdc++.h>
using namespace std;
    
//#define int long long
    
void solve(){
    string S;
    set<string>check;
    while (getline(cin,S)){
        S += " ";
        string temp ="";
        for(int i = 0; i < S.size(); i++){
            if (S[i] == ' ') {
                check.insert(temp);
                temp = "";
            }
            else temp += S[i];
        }
    }
    if (check.find("Welcome") != check.end() &&
    check.find("Hue") != check.end() && 
    check.find("University") != check.end() &&
    check.find("of") != check.end() &&
    check.find("Sciences") != check.end()) cout << "Yes";
    else cout << "No";
}
signed main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}
