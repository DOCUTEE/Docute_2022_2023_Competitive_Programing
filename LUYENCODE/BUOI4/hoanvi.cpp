#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n; 
    vector<int>arr;
    bool b = true; 
    cin >> n;
    for (int i = 1;i <= n; i++) arr.push_back(i);
    while (b){
        if (b)
        for (int i = 0; i<n; i++) cout << arr[i] <<" ";
        cout << endl;
        b = next_permutation(arr.begin(),arr.end());
    }
}