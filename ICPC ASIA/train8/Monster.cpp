#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i, a, n) for (ll i = a; i <= n; i++)
int maxx,maxy,n,savex,savey;
ll sumx[1000005], sumy[1000005], value[1000005],ans,build[1000005],check;
vector<pair<int, int>> post(300005);

bool compare(ll a, ll b){
    return a>b;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    loop(i, 1, n)
    {
        cin >> post[i].first >> post[i].second >> value[i];
        maxx = max(maxx, post[i].first);
        maxy = max(maxy, post[i].second);
        sumx[post[i].first] += value[i];
        sumy[post[i].second] += value[i];
    }
    check = 0;
//================================================================================
    loop(i, 1, n)
    {
        build[i] = sumx[post[i].first] + sumy[post[i].second] - value[i];
        if (check < build[i])
        {
            savex = post[i].first;
            savey = post[i].second;
            check = build[i];
        }
    }
//=================================================================================       
    loop(i,1,n) if (savex != post[i].first) ans = max(ans, check + build[i] - sumy[savey]);
    loop(i,1,n) if (savey != post[i].second) ans = max(ans, check + build[i] - sumx[savex]);
    sort(sumy+1, sumy+maxy+1,compare); 
    sort(sumx+1, sumx+maxx+1,compare);         
    ans = max(ans,sumx[1]+ sumx[2] + sumx[3]);  
    ans = max(ans,sumy[1]+ sumy[2] + sumy[3]);
    cout << ans;
}