#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void import(string &S, int &n)
{
    cin >> n;
    cin.ignore();
    getline(cin,S);
}
int findsum(string S,int n)
{
    if (n <= 0) return 0;
    int sum = 0;
    int i = n - 1;
    int factor = 1;
    while(i >= 0 && S[i] >= '0' && S[i] <='9')
    {
        sum += factor*(S[i] -'0');
        factor *= 10;
        i--;
    }
    //cout << sum << endl;
    return sum + findsum(S,i);
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string S;
    int n;
    import(S,n);
    int result = findsum(S,n);
    cout << result;
}