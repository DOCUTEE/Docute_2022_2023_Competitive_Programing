//¸,ø¤º°`°º¤ø,¸¸,ø¤º° [ нvмegy ] °º¤ø,¸¸,ø¤º°`°º¤ø,¸ roadтoнυe
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(c) c.begin(), c.end()
#define debug(c) cerr << (#c) << ": " << (c) << ' '

int const mod = 1e9 + 7;

void gotoHUE();

int32_t main()
{
        cin.tie(0) -> sync_with_stdio(0); 
        cout << fixed << setprecision(15);

        bool MULTITEST = 0;


        int OLPChuyenTin2023 = 1;
        if (MULTITEST)
                cin >> OLPChuyenTin2023;
        while (OLPChuyenTin2023 --> 0)
        {
                gotoHUE();
        }
        return 0;
}

void gotoHUE()
{
        vector<int> spf(1e5+1); 
        iota(all(spf), 0); 
        for (int i = 2; i*i <= 1e5; i++) { 
                if (spf[i] == i) { 
                        for (int j = i*i; j <= 1e5; j+=i) { 
                                if (spf[j] == j) spf[j] = i; 
                        }
                }
        }
        int n;
        cin >> n; 
        vector<int> a(n+1); 
        vector<int> cnt(1e5 + 1, 0); 
        for (int i = 1; i <= n; i++) { 
                cin >> a[i]; 
                cnt[a[i]]++;
        }
        sort(1 + all(a)); 
        a.erase(unique(all(a)), a.end());
        n = a.size() - 1;

        vector<int> dif; 
        for (int i = 1; i <= n; i++) { 
                for (int j = i+1; j <= n; j++) { 
                        int d = (a[j] - a[i]); 
                        if (d == 1) continue; 
                        dif.push_back(spf[d]);
                }
        }
        int ans = 0; 
        sort(all(dif)); 
        dif.erase(unique(all(dif)), dif.end());
        int mxe = *max_element(all(a)); 
        for (int d : dif) { 
            cout << d << "|";
                vector<int> dp(mxe+7, 0);
                for (int i = 1; i <= n; i++) {
                        dp[a[i]] = cnt[a[i]];
                }
                for (int i = 1; i <= n; i++) { 
                        for (int j = a[i] - d; j >= 1; j-=d) { 
                                if (cnt[j] == 0) continue;
                                dp[a[i]] = max(dp[a[i]], dp[j] + cnt[a[i]]);
                                cout << dp[a[i]] <<" ";
                        }
                        ans = max(ans, dp[a[i]]);
                }
            cout << endl;
        }
        cout << ans;
}