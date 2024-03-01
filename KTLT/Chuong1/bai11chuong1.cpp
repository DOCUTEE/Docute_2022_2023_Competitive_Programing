#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define endl '\n'

struct student{
    string id;
    string name;
    int year;
    float math;
    float physical;
    float chemistry;
    float score;
};
void import(int &n, vector<student> &a){
    cin >> n;
    a.resize(n);
    for(auto &x: a){
        cin.ignore();
        getline(cin,x.id);
        getline(cin,x.name);
        cin >> x.year;
        cin >> x.math;
        cin >> x.physical;
        cin >> x.chemistry;
        cin >> x.score;
    }
}
void show(vector<student> a){
    for(auto x: a){
        cout << x.id << endl;
        cout << x.name << endl;
        cout << x.year << endl;
        cout << x.math << endl;
        cout << x.physical << endl;
        cout << x.chemistry << endl;
        cout << x.score << endl;
    }
}
student highestScore(vector<student> a){
    student result = a[0];
    for(auto x: a){
        if (x.score > result.score) result = x;
    }
    return result;
}
bool compare(student a, student b){
    return a.score < b.score;
}
bool compareMath(student a, student b){
    return a.math > b.math;
}
void listIncreaseScore(vector<student>&a){
    sort(a.begin(),a.end(),compare);
}
void listdecreaseMath(vector<student>&a){
    sort(a.begin(),a.end(),compareMath);
}
vector<student> listOnFive(vector<student>a){
    vector<student>sheet;
    for(auto x: a){
        if (x.score > 5 && min({x.math,x.physical,x.chemistry}) >= 3) sheet.push_back(x);
    }
    return sheet;
}
student highestAge(vector<student> a){
    student current = a[0];
    for(auto x: a){   
        if (current.year > x.year) current = x;
    }
    return current;
}
student search(vector<student>a, string request, bool &check){
    for(auto x: a){
        if (x.name == request) return x;
    }
    check = false;
    return a[0];
}
void onlyStudent(student a){
    cout << a.id << endl;
    cout << a.name << endl;
    cout << a.year << endl;
    cout << a.math << endl;
    cout << a.physical << endl;
    cout << a.chemistry << endl;
    cout << a.score << endl;    

}
signed main(){
    int n;
    vector<student>a;
    import(n,a);
    show(a);
    student info = highestScore(a);
    onlyStudent(info);
    listIncreaseScore(a);
    show(a);
    listdecreaseMath(a);
    show(a);
    vector<student>sheet = listOnFive(a);
    show(sheet);
    info = highestAge(a);
    onlyStudent(info);
    string request;
    cin.ignore();
    getline(cin, request);
    bool check = true;
    info = search(a, request, check);
    if (check) onlyStudent(info);
    else cout << "-1" << endl;
    return 0;
}
