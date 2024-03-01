#include <bits/stdc++.h>
using namespace std;
vector<string>st;
bool compare(string a, string b){
    return a > b;
}
int main(){
    int n;
    string temp;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        st.push_back(temp);
    }
    sort(st.begin(), st.end(), compare);
    for(int i = 0; i < n; i++) cout << st[i];
}