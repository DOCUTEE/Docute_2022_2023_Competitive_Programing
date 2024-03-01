#include <bits/stdc++.h>
using namespace std;

#define int long long

void import(string &a, string &b){
    cin >> a >> b;
}
void make_equal(string &a, string &b){
    int temp = abs((int) a.size() - (int)b.size());
    if (a.size() < b.size()) a = string(temp,'0') + a;
    else b = string(temp,'0')  + b;
}
string bigplus(string a, string b){
    int temp = 0;
    string c = "";
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    for(int i = 0; i < a.size();i++){
        int x = a[i] - '0';
        int y = b[i] - '0';
        c += (x + y + temp) % 10 + '0';
        temp = (x + y + temp) / 10;
    }
    if (temp == 1) c += "1";
    reverse(c.begin(), c.end());

    return c;    
}
string bigdec(string a, string b){
    bool check = true;
    string c = "";
    if (a < b){
        swap(a,b);
        check = false;
    }
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int temp = 0;
    for(int i = 0; i < a.size(); i++)
    {
        int x = a[i] - '0';
        int y = b[i] - '0'  + temp;
        if (x >= y){
            c+= x-y + '0';
            temp = 0;
        }
        else
        {
            c += 10 + x  - y + '0';
            temp = 1;
        }  
        //cout << c << endl;  
    }
    if (check == false) c += "-";
    reverse(c.begin(),c.end());
    while (c[0] == '0' && c.size() > 1){
        c.erase(0,1);
    }
    return c;
}
void exp(string c){
    cout << c << endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a,b;
    import(a,b);
    make_equal(a,b);
    string result = bigplus(a,b);
    exp(result);
    result = bigdec(a,b);
    exp(result);
}