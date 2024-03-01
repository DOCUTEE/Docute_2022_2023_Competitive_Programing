#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int countn(int n)
{
    int cnt = 0;
    while (n != 0)
    {
        cnt++;
        n/= 10;
    }
    return cnt;
}
int binpow(int a, int n)
{
    if (n == 0) return 1;
    if (n == 1) return a;
    int temp = binpow(a, n/2);
    if (n % 2) return temp*temp*a;
    else return temp*temp;
}
bool isAm(int n, int k)
{
    int sum = 0, save = n;
    while(n != 0)
    {
        int temp = n % 10;
        sum += binpow(temp, k);
        n /= 10;
    }
    return sum == save;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;  
    cin >> n;
    int result = 0;
    for(int i = 1; i <= n; i++)
    {
        if (isAm(i,countn(i))) 
        {
            result += i;
            //cout << i << endl;
        }
    }
    cout << result << endl;

}