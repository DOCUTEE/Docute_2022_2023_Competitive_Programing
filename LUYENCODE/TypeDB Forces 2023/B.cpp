#include<bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cout <<" hello";
    int t,cnt = 1,dem = 0;
    long long n, res = 0;
    cin >> t;
    while (t--){
        cin >> n;
        vector<int>a,p;
        cnt = 1;
        res = 0;
        while (n > 1){
            cnt++;
            dem = 0;
            if (n % cnt == 0){
                a.push_back(cnt);
                while (n % cnt == 0){
                    dem++;
                }
            }
            p.push_back(dem);
        }
        for (int i = 0; i < a.size();i++) res += a[i]*p[i];
        cout << res << endl;
    }
    cout << 1;
    return 0;
} 