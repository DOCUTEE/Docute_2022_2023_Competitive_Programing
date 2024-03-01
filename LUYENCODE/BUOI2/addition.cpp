#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
string bsum(string a, string b, int q){
    int number[10] = {0,1,2,3,4,5,6,7,8,9};
    char st[10] = {'0','1','2','3','4','5','6','7','8','9'};
    int x,y,sum = 0;
    string res="";
    for (int i = q - 1; i >=0; i--){
        x = number[a[i] - '0'];
        y = number[b[i] - '0'];
        sum = sum + x + y;
        res = st[sum % 10] + res;
        sum = sum / 10;
    }
    if (sum == 1) res = st[sum] + res;
    return res;
}

string sub(string temp,string c){
    if (temp.size() > c.size()) c = "0" + c;
    if (temp.size() < c.size()) temp = "0" + temp;
    int x,y,s = 0,check = 0;
    int number[10] = {0,1,2,3,4,5,6,7,8,9};
    char st[10] = {'0','1','2','3','4','5','6','7','8','9'};
    string res = "";
    for (int i = temp.size() - 1; i >=0; i--){
        x = number[temp[i] - '0'];
        y = number[c[i]] + check;
        if (y > x){
            x = x + 10;
            check = 1;
        } else check = 0;
        res = st[x-y] + res;
    }
    return res;
}
int main(){ 
    string a,b,c,temp,kq;
    int dem,q = 4;
    while (q != 0){
        cin >> q;
        dem = 0;
        if (q != 0){
            cin >> a >> b >> c;
            temp = bsum(a,b,q);
            kq = sub(temp,c);
            for (int i = 0; i < kq.size(); i++)
                if (kq[i] != '0') dem++;
        }
        cout << dem << endl;
    }
    return 0;
}