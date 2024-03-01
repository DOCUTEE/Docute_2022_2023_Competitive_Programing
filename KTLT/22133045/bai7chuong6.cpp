#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int inf = 1e18;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int>a(n+1);
    for(int i = 0; i < n; i++) cin >> a[i];
    a[n] = inf;
    vector<int>pr(n+1);
    for(int i = 0; i < n; i++) pr[i] = a[i+1]-a[i];
    int dem = 1;
    vector<vector<int>>save;
    vector<int>temp;
    for(int i = 0; i < n; i++)
    {
        if (pr[i] >= 0){
            dem = 0;
            //cout << a[i] << " ";
            temp.push_back(a[i]);
        } 
        else
            {
                ++dem;
                if (dem == 1){
                    //cout << a[i] << endl;
                    temp.push_back(a[i]);
                    save.push_back(temp);
                }
                temp.clear();
            } 
        //cout << pr[i] << " "<<dem << endl;
    }
    int sum = 0, cmp = 0;
    vector<int>res = save[0];
    for(auto x: save){
        sum = 0;
        for(auto y: x) sum += y;
        if (sum > cmp)
        {
            cmp = sum;
            res = x;
        }
    }
    for(auto x: res) cout << x << " ";
    cout << endl << cmp;
}