#include <bits/stdc++.h>
using namespace std;
int n,a;
string b;
vector<int>value;
vector<string>number;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n; 
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        value.push_back(a);
        number.push_back(b);
    }
    int min = 1000000, pos = 0,up = 0;
    string year = "2021";
    for (int i = 0; i < n; i++){
        if (value[i] < min) {
            up = 0;
            year = "2021";
            for (int j = 0; j < number[i].size(); j++){
                if ((year.find(number[i][j]) >=0) &&  (year.find(number[i][j]) < year.size())){
                    year.erase(year.find(number[i][j]),1);
                    up++;
                }
            }
            if (up == 4) {
                min = value[i];
                pos = i+1;
            }
        }
    }
    cout << pos;
    return 0;
}