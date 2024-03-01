#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7; 
#define loop(i,a,n) for(int i = a; i <= n; i++)
bool check(vector<int>a){
    for(int i = 0; i < a.size()-2; i++)
            for (int j = i+1; j < (a.size()-1); j++)
                for(int k = j+1; k < a.size(); k++){
                    if ((a[i]+a[j]+a[k]) % 10 == 3) return true;
                }
    return false;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long t,n,temp;
    cin >> t;
    int save[11];
    vector<int>a;
    while (t--){
        cin >> n;
        fill(save,save+10,0);
        a.clear();
        for(int i = 0; i < n; i++){
            cin >> temp;
            temp %= 10;
            save[temp]++;
            if (save[temp] <= 3) a.push_back(temp);
        }
        string result = (check(a)) ? "YES" : "NO";
        cout << result << "\n";
    }

    
}