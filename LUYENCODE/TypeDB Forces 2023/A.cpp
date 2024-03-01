#include <bits/stdc++.h>

using namespace std;
long long t,up,head,result,cnt,temp,n;

bool check(long long prime){
    if (prime <= 2) return false;
    for(int i = 2; i <= sqrt(prime);i++)
    if (prime % i == 0) return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        up = 1;
        head = 0;
        result = 0;
        vector<long long> a, p;
        while (n > 1 || up <= sqrt(n)){
            up++;
            cnt = 0;
            if (n % up == 0){
                a.push_back(up);
                while (n % up == 0){
                    cnt++;
                    n /= up;
                }
                head = max(cnt,head);
                p.push_back(cnt);
            }
            if (check(n)){
                a.push_back(n);
                p.push_back(1);
                n = 1;
            }
        }
        for(int k = 0; k < head; k++){
            temp = 1;
            for (int i = 0; i < a.size(); i++)
            if (p[i] != 0){
                temp *= a[i];
                p[i]--;
            }
            result += temp;
        }
        cout << result << endl;
    }
        
}