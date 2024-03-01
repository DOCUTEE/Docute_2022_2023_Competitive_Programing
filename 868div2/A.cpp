#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
const int inf = 1e18;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        //vector<int>save(10000001,0);
        map<int,int>save;
        vector<int>a(1005);
        int n;
        cin >> n;
        int cmp = -inf;
        for(int i = 0; i < n; i++)
        {
            int x; 
            cin >> x;
            cmp = max(cmp, x);
            for(int cnt = 2; cnt*cnt <= x; cnt++)
            {
                if(x % cnt == 0)
                {
                    while(x % cnt == 0)
                    {
                        save[cnt]++;
                        x/=cnt;
                    }
                }
            }
            if (x > 1) save[x]++;
        }
        int result = 0;
        for(auto &it: save)
        {
            result += it.second/2;
            it.second %= 2;
        }
        int temp = 0;
        for(auto it: save)
        temp += it.second;
        cout << result + temp/3 << endl;
    }
}