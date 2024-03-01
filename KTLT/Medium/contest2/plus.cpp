#include<bits/stdc++.h>
using namespace std;
void clean(string &a)
{
    while(a.size() > 1 && a[a.size() - 1] == '0')
    {
        a.pop_back();
    } 
}
string add(string a, string b)
{
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    while(a.size() != b.size())
    {
        if (a.size() < b.size()) a.push_back('0');
        else b.push_back('0');
    }
    int cal, save, temp;
    temp = 0;
    string res = "";
    for(int i = 0; i < a.size(); i++)
    {
        cal = (a[i]-'0') + (b[i]-'0') + temp;
        temp = cal/10;
        cal %= 10;
        res.push_back(cal + '0');
    }
    if (temp > 0) res.push_back('1');
    clean(res);
    reverse(res.begin(), res.end());
    return res;
}
int main()
{
    string a,b;
    cin >> a >> b;
    cout << add(a,b);
}   