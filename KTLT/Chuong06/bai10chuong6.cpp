#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int inf = 1e18;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string S;
    getline(cin, S);
    istringstream iss(S);
    string word;
    while (iss >> word)
    {
        reverse(word.begin(), word.end());
        cout << word << " ";
    }
}