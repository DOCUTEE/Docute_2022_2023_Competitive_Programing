#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int convert(int x)
{
    vector<int>save;
    while(x != 0)
    {
        save.push_back(x & 1);
        x >>= 1;
    }
    for(int i = 0; i < save.size(); i++)
    if (i % 2 == 0) save[i] = 1;
    int result = 0;
    reverse(save.begin(), save.end());
    for(int i = 0; i < save.size(); i++)
    {
        result <<= 1;
        result |= save[i];
        //cout << result <<" "<< save[i] << endl;
    }
    //cout << "------------------------" << endl;
    return result;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int result = 0;
    for(int i = 0; i < n; i++)
    {
        int x; 
        cin >> x;
        result = max(convert(x),result);
    }
    cout << result;
}