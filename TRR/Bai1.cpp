#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int inf = 1e18;
int n,m;
vector<pair<int,int>>adj(100000);
vector<char>edge(100000);
vector<int>bac(100000);
int a[1000][1000];
void canhsongsong()
{
    cout << "Cac cap canh song song la: ";
    for(int i = 1; i <= m; i++)
        for(int j = i+1; j <= n; j++)
        if (adj[i] == adj[j]) 
        {
            cout << " { " << edge[i] << " , " << edge[j] <<" }";
        }
    cout << endl;
}
void vong()
{
    cout << "Cac vong la: ";
    for(int i = 1; i <= m; i++)
    if (adj[i].first == adj[i].second) cout << edge[i] << " "; 
    cout << endl;
}
void dinhtreo()
{
    cout << "Cac dinh treo la: ";
    for(int i = 1; i <= n; i++)
    if (bac[i] == 1) cout << i << " ";
    cout << endl;
}
void dinhcolap()
{
    cout << "Cac dinh co lap la: ";
    for(int i = 1; i <= n; i++)
    if (bac[i] == 0) cout << i << " ";
    cout << endl;
}
signed main()
{
    freopen("graph.txt", "r", stdin);
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int cnt = 0;
        cin >> edge[i];
        for(int j = 1; j <= n; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                if (cnt == 0) adj[i].first = j;
                else adj[i].second = j;
                cnt++;      
            }
            else if (x == 2) adj[i] = {j,j};
            bac[j] += x;
        }
    }
    canhsongsong();
    vong();
    dinhtreo();
    dinhcolap();
    return 0;
}