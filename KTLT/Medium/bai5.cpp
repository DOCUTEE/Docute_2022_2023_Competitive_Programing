#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
const int inf = 1e18;

/* string min(string a, string b)
{
    int v1 = 0, v2 = 0;
    for(int i = 0; i < a.size(); i++)
    {
        v1 = (v1 << 1) | (a[i]-'0');
        v2 = (v2 << 1) | (b[i]-'0');
    }
    return (v1 < v2) ? a : b;    
} */
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<string>a(52);
    getline(cin, a[0]);
    int n = a[0].size();
    for(int i = 1; i < n; i++) getline(cin,a[i]);
    string result ="";
    for(int i = 0; i < n; i++) result += "1";
    for(int i = 0; i < n; i++)
    {
        string temp = "";
        for(int j = 0; j < n; j++) temp += a[i][j];
        result = min(result, temp);
    }
    for(int j = 0; j < n; j++)
    {
        string temp = "";
        for(int i = 0; i < n; i++) temp += a[i][j];
        result = min(result, temp);
    }
    string temp = "";
    for(int i = 0; i < n; i++) temp += a[i][i];
    result = min(result, temp);
    temp = "";
    for(int i = 0; i < n; i++) temp += a[i][n-i-1];
    result = min(result, temp);
    if (n != 1) cout << result;
    else cout << a[0];
}