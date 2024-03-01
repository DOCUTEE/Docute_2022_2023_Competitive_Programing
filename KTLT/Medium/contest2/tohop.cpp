#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int inf = 1e18;
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
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin >> n >> k;
    vector<vector<string>>th(105,vector<string>(105,"0"));
    th[1][1] = "1";
    th[1][2] = "1";
    for(int i = 2; i <= n; i++)
    {
        for(int j = 1; j <= i+1; j++) 
        {
            th[i][j] = add(th[i-1][j],th[i-1][j-1]);
            //cout << th[i-1][j] << " " <<th[i-1][j-1]<< endl;
            //cout << th[i][j] << " ";
        }
        //cout << endl;
    }
    cout << th[n][k+1];
}