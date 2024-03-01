#include <bits/stdc++.h>
using namespace std;
int n,k,temp;
map<int,int>store;
vector<int>arr;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> temp;
        arr.push_back(temp);
        store[temp] = i+1;
    }
    bool check = true;
    for (int i = 0; i < arr.size(); i++){
        if ((store[k + arr[i]] != 0) && (i+1 != store[k + arr[i]])) 
        {
            check = false;
            cout <<store[k + arr[i]] <<" "<< i+1;
            break; 
        }
    }
    if (check == true) cout << "0 0"; 
}