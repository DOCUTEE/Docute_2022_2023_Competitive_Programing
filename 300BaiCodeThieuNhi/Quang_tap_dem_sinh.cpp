#include<bits/stdc++.h>
using namespace std;

mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
int Rand(int l, int r)
{
    return l + rd()*rd()%(r-l+1);
}
int main(){
    ofstream cout;
    cout.open("input.txt");
    int n = 100000;
    int k = Rand(1,100000);
    cout << n << " " << k << '\n';
    for(int i = 0; i < n; i++) cout << Rand(1,100) << " ";
    cout.close();
    system("hello.exe");
}