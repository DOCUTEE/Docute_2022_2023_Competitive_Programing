#include <bits/stdc++.h>
using namespace std;
int t,n,temp,result = 0,k = 0;
bool compare(int a, int b){
    return abs(a) < abs(b);
}
int main()
{
    cin >> t >> n;
    vector<int>ex = {0};
    for(int i = 0; i < n; i++){
        cin >> temp;
        ex.push_back(temp);
    }
    sort(ex.begin(), ex.end(), compare);
    int i = 1;
    while(result < t){
        result += abs(ex[i-1] - ex[i]);
        k++;
        i++;
        if(result > t) k--;
    }
    cout << k;
}