#include<bits/stdc++.h>
using namespace std;

#define int long long
#define nl "\n"

int priority(char a)
{
    if (a == '!') return 4;
    else if (a == '&') return 3;
        else if (a == '|' || a == '-') return 2;
    return 1;
}
string convert(string S){
    string result;
    stack<char>oper;
    char a;
    for(auto x: S){
        if ('a'<=x && x <='z') result += x;
        else if (x == '(') oper.push(x);
            else if (x == ')')
            {
                a = oper.top();
                while (a != '(')
                {
                    result += a;
                    oper.pop();
                    a = oper.top();
                }
                oper.pop();
            } 
            else
            {
                while (!oper.empty() && priority(x) <= priority(oper.top()))
                {
                    a = oper.top();
                    oper.pop();
                    result += a;
                }
                oper.push(x);
            }
    }
    while(!oper.empty())
    {
        a = oper.top();
        oper.pop();
        result += a;
    }
    return result;
}
vector<char> cnt(string S){
    set<char>save;
    vector<char> result;
    for(auto x: S){
        if('a'<=x && x <='z' && save.count(x) == 0){ 
            save.insert(x);
            result.push_back(x);
        }
    }
    return result;
}
bool keotheo(bool a,bool b){
    if( a == true && b == false) return false;
    return true;
}
vector<bool> create_binary(int n, int k){
    vector<bool>bin;
    while(n > 0){
        bin.push_back(n%2);
        n /= 2;
    }
    while (bin.size() != k) bin.push_back(0);
    return bin;
}
bool cal(map<char,bool>check, string S){
    stack<char>bien;
    stack<char>oper;
    stack<bool>temp;
    bool st1, st2;
    bool result;
    for(auto x: S){
        if('a'<=x && x <='z' && x != 'v'){
            temp.push(check[x]);
        }
        else 
        {
            if (x == '!'){
                result = !temp.top();
                temp.pop();
                temp.push(result);
            }
            else
            {
                st2 = temp.top();
                temp.pop();
                st1 = temp.top();
                temp.pop();
                if (x == '|'){
                    result = st1 || st2;
                    temp.push(result);
                }
                else if (x == '&')
                {
                    result = st1 && st2;
                    temp.push(result);
                }
                else if (x == '-')
                {
                    result = keotheo(st1,st2);
                    temp.push(result);
                }
            }
        }
    }
    return result;
}
signed main(){
    string S;
    getline(cin,S);
    string RPN = convert(S); // RPN là phép tính sau khi đã chuyển từ trung tố sang hậu tố (Dùng quy tắc đảo Ba Lan)
    cout << RPN << endl;
    vector<char>save = cnt(RPN); //save có nghĩa là mảng chứa các biến có trong mệnh đề
    int k = save.size(); // số lượng biến có trong mệnh đề  
    map<char,bool>variable; 
    int cnt = 0; //biến này để đêm xem có bao nhiêu chân trị đúng
    bool ketqua;
    for (auto x: save) cout << x << "|";
    cout <<"E"<< endl;
    int n = (1 << save.size());
    for(int i = 0; i < n; i++){
        vector<bool>plan = create_binary(i, k);
        for(int j = 0; j < k; j++) variable[save[j]] = plan[j];
        for(auto x: plan) cout << x << "|";
        cout << cal(variable,RPN) << endl;
    }

}
//DOCUTE <3

