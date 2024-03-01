#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define endl '\n'
const int inf = 1e18;

signed main()
{
    //freopen("input100.txt", "r", stdin);
    //freopen("output100.txt", "w", stdout);
    string S;
    getline(cin, S);
    int left = 0;
    bool check = false;
    bool vis = false;
    for(int i = 0; i < S.size()-1; i++) 
    {
        string temp = S.substr(i,2);
        if (temp == "AB")
        {
            left = i+1;
            vis = true;
            break;
        }
    }
    if (vis)
    for(int i = left+1; i < S.size()-1; i++)
    {
        string temp = S.substr(i,2);
        if (temp == "BA")
        {
            check = true;
        }
    }
    vis = false;
    if (check == false)
    {
        left = 0;
        for(int i = 0; i < S.size()-1; i++) 
            {
                string temp = S.substr(i,2);
                if (temp == "BA")
                {
                    left = i+1;
                    vis = true;
                    break;
                }
            }
        if (vis)
        for(int i = left+1; i < S.size()-1; i++)
            {
                string temp = S.substr(i,2);
                if (temp == "AB")
                {
                    check = true;
                }
            } 
    }
    if (check) cout <<"YES";
    else cout <<"NO";
}