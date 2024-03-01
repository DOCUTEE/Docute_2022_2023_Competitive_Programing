#include<bits/stdc++.h>
using namespace std;
    
#define int long long
struct Word{
    string word;
    string level;
    string meanning;
    string kindOfWord;
};

void solve(){
    Word word = {"car","A1", "Xe hoi 4 banh","N"};
    cout << word.word <<" " << word.level <<" "<<word.meanning << " " << word.kindOfWord;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}