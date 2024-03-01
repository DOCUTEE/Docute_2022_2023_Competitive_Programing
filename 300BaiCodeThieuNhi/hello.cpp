#include<bits/stdc++.h>
using namespace std;
    
#define int long long
    
int countPairs(vector<int>& nums, int k) {
    map<int,int>cntGCD;
    int cnt = 0;
    for(int num: nums){
        int temp = __gcd(k,num);
        int need = k/temp;
        for(pair<int,int> p: cntGCD) 
            if (p.first % need == 0) cnt += p.second;         
        cntGCD[temp]++;
    }
    return cnt;
}
signed main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    ifstream in;
    ofstream out;
    in.open("input.txt");
    out.open("output.txt");
    int n,k;
    in >> n >> k;
    vector<int>nums(n);
    for(auto &x: nums) in >> x;
    int result = countPairs(nums,k);
    out << result;
    in.close();
    out.close();
}
