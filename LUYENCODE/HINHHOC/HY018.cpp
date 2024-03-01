#include <bits/stdc++.h>
using namespace std;
#define loop(i,a,n) for(int i = a; i < n; i++)
int n,x,y,x_1,y_1,result;
bool post[60001][60001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    while (n--){
        cin >> x >> y >> x_1 >> y_1;
        loop(i,x,x_1) loop(j,y,y_1) post[i+30000][j+30000] = true;
    }
    loop(i,0,60001) loop(j,0,60001) if (post[i][j]) result++;
    cout << result;
    return 0;
}