#include<bits/stdc++.h>
using namespace std;
//#define int long long
#define endl "\n"
#define NAME "input100"
//#define int long long


mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
int Rand(int l, int r)
{
    return l + rd()*rd()%(r-l+1);
}
#define OK Rand(1,10000)
int n,m;
void Maketest()
{
    ofstream cout ("lineup.txt");
    n = m = 100000;
    //m = Rand(1000,10000);
    set<pair<int,int>>save;
    string temp[3] = {"union", "check", "get"}; 
    cout << n <<" "<< m << endl;
    int u,v;
    for(int i = 0; i < m; i++)
    {
        int x = Rand(0,2);
        cout << temp[x] << " ";
        if (x == 0){
            u = OK;
            v = OK;
            while(save.count({u,v}) || u == v)
            {
                u = OK;
                v = OK;
            }
            cout << u << " " << v << endl;
        }   
        else if (x == 1)
            {
                u = OK;
                v = OK;
                while(save.count({u,v}) || u == v)
                {
                    u = OK;
                    v = OK;
                }
                cout << u << " " << v << endl;
            }
            else
            {
                cout << OK << endl;
            }
    }
}
signed main()
{
    bool check = true;
    while(check)
    {
        Maketest();
        system("DSUMED.exe");
        ifstream cin;
        cin.open("quang.txt");
        int cnt = 0;
        string Ngan;
        while(!cin.eof())
        {
            cin >> Ngan;
            if (Ngan == "YES") cnt++;
        }
        if (cnt >= 5000) check = false;
    }
}