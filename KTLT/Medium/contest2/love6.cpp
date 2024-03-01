#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
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
bool check(string s)
{
    if((s[s.size() - 1]-'0') % 2 != 0) return false;
    int sum = 0;
    for(int i = 0; i < s.size(); i++) sum += (s[i] - '0');
    if (sum % 3 == 0) return true;
    return false;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    string a,b;
    cin >> n >> a >> b;
    //cout << a << b;
    vector<string>f(n+1);
    f[1] = a;
    f[2] = b;
    int cnt = 0;
    for(int i = 3; i <= n; i++)
    {
        f[i] = add(add(f[i-1],f[i-2]),to_string(2*i -3));
    }
    for(int i = 1; i <= n; i++) cnt += check(f[i]);
    cout << cnt;
}   