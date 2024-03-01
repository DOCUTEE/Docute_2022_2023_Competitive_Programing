#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,n) for(int i = a; i <= n; i++)
int n,m,a[1000][1000],cnt,temp;
bool post[1000][1000];

void import(int &n, int &m, int a[1000][1000]){
    cin >> n >> m;
    loop(i,1,n) loop(j,1,m) cin >> a[i][j];    
}

void rotate1(int a[1000][1000]){
    for(int i = 1; i <= n; i++)
    {
        temp = -1;
        for(int j = 1; j <= m; j++)
        if (a[i][j] > temp){
            if (!post[i][j]) cnt++;
            post[i][j] = true;
            temp = a[i][j];
        }
    }
}
void rotate2(int a[1000][1000]){
    for(int j = 1; j <= n; j++)
    {
        temp = -1;
        for(int i = 1; j <= m; j++)
        if (a[i][j] > temp){
            if (!post[i][j]) cnt++;
            post[i][j] = true;
            temp = a[i][j];
        }
    }
}
void rotate3(int a[1000][1000]){
    for(int i = 1; i <= n; i++)
    {
        temp = -1;
        for(int j = m; j >= 1; j--)
        if (a[i][j] > temp){
            if (!post[i][j]) cnt++;
            post[i][j] = true;
            temp = a[i][j];
        }
    }
} 
void rotate4(int a[1000][1000]){
    for(int j = 1; j <= m; j++)
    {
        temp = -1;
        for(int i = n; i >= 1; i--)
        if (a[i][j] > temp){
            if (!post[i][j]) cnt++;
            post[i][j] = true;
            temp = a[i][j];
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    import(n,m,a);
    rotate1(a);
    rotate2(a);
    rotate3(a);
    rotate4(a);
    cout << cnt << endl;
}