#include <bits/stdc++.h>
using namespace std;
void import(string &S)
{
    getline(cin, S);
}
void remove_first_blank(string &S)
{
    while (S[0] == ' ')
    {
    }
}
string remove_blank(string S)
{
    int cnt = 0;
    string temp = "";
    bool check = false;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] != ' ')
            check = true;
        if (S[i] != ' ' && check)
        {
            cnt = 0;
            temp += S[i];
        }
        else if (check)
        {
            cnt++;
            if (cnt <= 1)
                temp += ' ';
        }
    }
    return temp;
}

void upcase(string &S)
{
    if (S[0] > 'Z')
        S[0] -= 32;
}
void exp(string S)
{
    cout << S;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string S;
    import(S);
    S = remove_blank(S);
    upcase(S);
    exp(S);
    return 0;
}