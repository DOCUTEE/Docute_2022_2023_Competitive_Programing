#include <bits/stdc++.h>
long long max(long long a, long long b){
    return a > b ? a : b;
}
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n,temp;
    vector<long long>arr;
    cin >> n;
    for (long long i = 0; i < n; i++){
        cin >> temp;
        arr.push_back(temp);
    }
    long long best = arr[1] - arr[0];
    for (long long i = 0; i < n - 2; i++){
        temp = max(arr[i+1] - arr[i], arr[i+2] - arr[i]);
        if (temp > best) best = temp;
    }
    cout << best;
}