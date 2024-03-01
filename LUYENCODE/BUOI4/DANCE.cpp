#include <bits/stdc++.h>
using namespace std;
long long n,m,x,y,pos,result,temp;
vector<long long>men;
vector<long long>women; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> m >> n;
    long long min = 10000000000000;
    for (long long i = 0; i < m; i++){
        cin >> x;
        men.push_back(x);
    } 
    for (long long i = 0; i < n; i++){
        cin >> y;
        women.push_back(y);
    }
    sort(men.begin(),men.end());
    sort(women.begin(),women.end());
    for (long long i = 0; i < n; i++){
	    pos = upper_bound(men.begin(),men.end(),women[i]) - men.begin();
        if (pos < men.size() && pos >= 0) {
			men.erase(men.begin() + pos);
        	result++;
        }
        if (men.size() == 0) break;
    } 
    cout << result;
    return 0; 
}