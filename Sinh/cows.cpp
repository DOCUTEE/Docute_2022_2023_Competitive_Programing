#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int inf = 1e18;
vector<string> a = {"Krixi", "Toro", "Emily", "Max", "Yasuo", "Leona", "Garen", "Jinx"};
int findindex(string temp)
{
    for(int i = 0; i < 8; i++)
    {
        if (temp == a[i]) return i;
    }
    return 0;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("lineup.in","r",stdin);
    //freopen("lineup.out","w",stdout);
    sort(a.begin(), a.end());
    int n;
    cin >> n;
    cin.ignore();
    vector<string>up,down;
    for(int i = 0; i < n; i++)
    {
        string x,y,temp;
        cin >> x;
        for (int j = 0; j < 4; j++) cin >> temp;
        cin >> y;
        up.push_back(x);
        down.push_back(y);
        //cout << x << " " << y << endl;
    }
    int check = true;
    int go = 1;
    for(int i = 1; i <= 8; i++) go*=i;
    for(int k = 1; k <= go; k++)
    {
        check = true;
        for(int i = 0; i < n; i++)
        {
            int pos1 = findindex(up[i]);
            int pos2 = findindex(down[i]);
            if (abs(pos1 - pos2) != 1) check = false;
        }
        if (check == true)
        {
            for(int i = 0; i < 8; i++) cout << a[i] << endl;
            return 0;
        }
        next_permutation(a.begin(), a.end());
    }
}
