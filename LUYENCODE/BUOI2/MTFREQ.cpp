#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    map<int, int>mp {};
    vector<int>arr;
    int n,temp;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        arr.push_back(temp);
        mp[temp]++;
    }
    cout << mp.size() << endl;
    for (int i = 0; i < n; i++)
    if (mp[arr[i]]!= 0) {
        
        cout << arr[i] << " " << mp[arr[i]] << endl;
        mp[arr[i]] = 0;
    } 
    return 0;
}