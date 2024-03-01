#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
bool correct(vector<vector<char>>a, char start){
    bool check = true;
    for(int i = 0; i < 3; i++)
    {
        check = true;
        for(int j = 0; j < 3; j++){
            if (a[i][j] != start) check = false;
        }
        if(check) return true;
    }
    check = true;
    for(int j = 0; j < 3; j++){
        check = true;
        for (int i = 0; i < 3;i++)
        {
            if (a[i][j] != start) check = false;
        }
        if (check) return true;
    }
    check = true;
    for(int i = 0; i < 3;i++)
    {
        if (a[i][i] != start) check = false;
    }
    if (check) return true;
    check = true;
    for(int i = 0; i < 3; i++){
        if (a[i][2-i] != start) check = false;
    }
    if(check) return true;
    return false;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<vector<char>>a(3, vector<char>(3));
    map<char, int>cnt;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
            cnt[a[i][j]]++;
        }
    string result;
    //cout << correct(a, 'X') && correct(a,'0');
    //cout << correct(a, 'X');
    if (cnt['X'] < cnt['0'] || abs(cnt['X'] - cnt['0']) > 1) result = "khonghople";
    else if (correct(a, 'X') == true && correct(a,'0') == true) result = "khonghople";
    else if (cnt['X'] + cnt['0'] == 9 && cnt['X']-cnt['0'] == 1)
            {
                if (correct(a,'X')) result = "mewin";
                    else if (correct(a,'0')) result = "khonghople";
                        else result = "draw";
            }
    else 
    {
        if (cnt['X'] == cnt['0']){
            if (correct(a, 'X')) result = "khonghople";
            else if (correct(a, '0')) result = "lywin";
                else result = "me"; 
        }
        else if (cnt['X'] - cnt['0'] == 1)
                {
                    if (correct(a, '0')) result = "khonghople";
                        else if (correct(a, 'X')) result = "mewin";
                            else result = "ly";
                }
    }
    cout << result << endl;
}