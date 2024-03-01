#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}
string add(string a, string b){
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    while (a.size() < b.size()) a += "0";
    while (b.size() < a.size()) b += "0";
    int mem = 0,plus = 0;
    string result = "";
    for(int i = 0; i < a.size(); i++){
        plus = a[i]-'0' + b[i]-'0' + mem;
        mem = plus / 10;
        plus %= 10;
        result += to_string(plus);   
    }
    if(mem) result += to_string(mem);
    reverse(result.begin(), result.end());
    return result;
}
string multi(string a, string b){
    int temp = 0,save = 0,cur = 0;
    string before = "0";
    string now = "";
    string after = "";
    for(int j = b.size()-1; j >= 0; j--){
        temp = 0;
        for(int i = a.size()-1; i >= 0; i--){
            cur = (a[i]-'0')*(b[j]-'0') + temp;
            temp = cur / 10;
            cur %= 10;
            now += to_string(cur);
        }
        if (temp != 0) now += to_string(temp);
        reverse(now.begin(), now.end());
        before = add(before, now);
        after += "0";
        now = after;
    }
    reverse(before.begin(), before.end());
    while(before.size() > 1 && before.back() == '0') before.pop_back();
    reverse(before.begin(), before.end());
    return before;
}
string div(string a, int b){
    int hold = 0, x = 0;
    string temp = "0";
    string result = "";
    for(int i = 0; i < a.size(); i++){
        hold = hold*10+ a[i]-'0';
        x = hold / b;
        hold %= b;
        result += to_string(x);
        //cout << result <<" "<< hold << endl;
    }
    reverse(result.begin(), result.end());
    while (result.size() > 1 && result.back() == '0') result.pop_back();
    reverse(result.begin(),result.end());
    return result;
}
int more(string &a, string &b){
    int bonus = 1;
    if (a[0] == '-') {
        a = a.substr(1, a.size()-1);
        bonus *= -1;
    }
    if (b[0] == '-'){
        b = b.substr(1, b.size()-1);
        bonus *= -1;
    }
    return bonus;
}
void exp(int bonus, string result){
    if (bonus < 0) cout << "-";
    cout << result << endl;
} 
signed main(){
    fast();
    int n;
    cin >> n;
    string n1 = to_string(n);
    ++n;
    string n2 = to_string(n);
    ++n;
    string n3 = to_string(n); 
    string result = div(multi(multi(n1,n2),n3),6);
    exp(1, result);
    return 0;
}
1+(1+2) + (1+2+3)+...(1+..+n) 
=
(n*(n+1)/2) + (n/2)*(n-1)/2