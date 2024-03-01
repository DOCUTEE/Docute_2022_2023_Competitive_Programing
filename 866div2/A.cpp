#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n+1);
        vector<bool> check(n+1, false);
        set<int> save;
        int mex = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            save.insert(a[i]);
            while(save.count(mex))
            {
                mex++;
            }
        }
        for(int i = 0; i < n; i++) if (a[i] >= mex) check[i] = true;
        int cnt = 0;
        bool temp = check[0];
        vector<int> dem(2);
        dem[temp]++;
        for(int i = 1; i < n; i++)
        {
            if(check[i] != temp)
            {
                dem[temp]++;
                temp = check[i];
            }
        }
        string result;
        if (dem[1] == 0) result = "Yes";
        else if (dem[1] == 1 && check[0] == false && check[n-1] == false) result = "Yes";
        else result = "No";
        cout << result << endl;
    }
}
