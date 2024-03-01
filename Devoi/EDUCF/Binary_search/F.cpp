#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string t,p;
    getline(cin, t);
    getline(cin, p);
    vector<int>pos(t.size()); //it mean after how many characters then character i_th will be erase
    for(int i = 0; i < t.size(); i++)
    {
        int c;
        cin >> c;
        pos[--c] = i; 
    }
    int r = t.size(), l = 0;
    //check the last time that word p is a substring of word t.
    while(r >= l) 
    {
        int mid = (l+r)/2; 
        int j = 0;
        for(int i = 0; i < t.size(); i++)
        if (pos[i] >= mid && t[i] == p[j]) j++;
        if (j >= p.size()) l = mid+1;
        else r = mid - 1;
    }
    cout << l - 1;

}