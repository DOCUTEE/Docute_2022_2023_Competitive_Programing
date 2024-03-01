#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int inf = 1e18;

phanso kq = {0,1};
struct phanso
{
    string tu;
    string mau;
};
string tong(string a, string b)
{
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    while (b.size() != a.size())
    {
        if (a.size() > b.size()) b += "0";
        else a += "0";
    }
    int nho = 0;
    string T = "";
    for(int i = 0; i < a.size(); i++)
    {
        int tam = a[i] - '0' + b[i] - '0'+ nho;
        nho = tam/10;
        tam %= 10;
        T += to_string(tam);
    }
    if (nho == 1) T+= "1";
    while(T.back() == '0' || T.size() != 1)
    {
        T.pop_back();
    }
    reverse(T.begin(), T.end());
    return T;
}
string tich(string a, string b)
{
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    string them ="", save;
    int nho = 0;
    string tich = "0";
    for(int i = 0; i < b.size(); i++)
    {
        save = "";
        for(int j = 0; j < a.size(); j++)
        {
            int tam = (b[i] - '0')*(a[j] - '0')+nho;
            nho = tam/10;
            save += to_string(tam%10);
        }
        if (nho > 0) save += to_string(nho);
        reverse(save.begin(), save.end());
        tich = tong(tich, save+them);
        them += "0";
    }
    return tich;
}
string thuong(string a, string b)
{
    
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<phanso>a(n);
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].tu >> a[i].mau;
    }
    
    
}