#include <bits/stdc++.h>
using namespace std;
int n,m,costn,costm,result,temp1,temp2;
bool compare(int a, int b){
    return a < b ? true : false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin >> n >> m >> costn >> costm;
    if (compare(m*costn,costm)) result = n*costn;
    else{
        temp1 = ceil((double)n/(double)m) * costm;
        temp2 = (n/m)*costm + (n % m)*costn;
        if (compare(temp1,temp2)) result = temp1;
        else result = temp2;
    }
    cout << result;
}
    