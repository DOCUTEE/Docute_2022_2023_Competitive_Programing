#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
struct DATE{
    int ngay;
    int thang;
    int nam;
};
struct HOCSINH{
    string ngaysinh;
    string MSHS,hoten,diachi,phai;
    string diemtb;
};
void remove_blank(string &S, int check){
    while (S.back() == ' '){
        S.pop_back();
    }
    while (S.size() > check){
        S.pop_back();
    }
}
void nhapNgaysinh(DATE &ngaysinh){
    string temp;
    getline(cin, temp);
    remove_blank(temp,1000000000);
    int cnt = 0;
    for(int i = 0; i < temp.size(); i++){
        if (temp[i] == '/') cnt++;
        else if (cnt == 0) ngaysinh.ngay = ngaysinh.ngay*10 + temp[i] - '0';
            else if (cnt == 1) ngaysinh.thang = ngaysinh.thang*10 + temp[i] -'0';
                else if (cnt == 2) ngaysinh.nam = ngaysinh.nam*10 + temp[i] -'0';
    }
}
void xuatNgaysinh(DATE ngaysinh){
    cout << ngaysinh.ngay <<"/" <<ngaysinh.thang<<"/" << ngaysinh.nam << endl;
}
int up(vector<HOCSINH>info){
    int cnt = 0;
    for(auto x: info){
        if(stof(x.diemtb) >= 5) cnt++;
    }
    return cnt;
}
void import(int n, vector<HOCSINH>&info){
    cin.ignore();
    for(auto &x: info){
        getline(cin,x.MSHS);
        remove_blank(x.MSHS,5);
        getline(cin,x.hoten);
        remove_blank(x.hoten, 30);
        //nhapNgaysinh(x.ngaysinh);
        getline(cin,x.ngaysinh);
        remove_blank(x.ngaysinh, 1000000000000);    
        getline(cin,x.diachi);
        remove_blank(x.diachi, 50);
        getline(cin,x.phai);
        remove_blank(x.phai, 3);
        getline(cin,x.diemtb);
        remove_blank(x.phai,100000000000000);
    }
}
void exp(vector<HOCSINH>info, int soluong){
    for(auto x: info){
        cout << x.MSHS << endl;
        cout << x.hoten << endl;
        //xuatNgaysinh(x.ngaysinh);
        cout << x.ngaysinh << endl;
        cout << x.diachi << endl;
        cout << x.phai << endl;
        cout << x.diemtb << endl;
    }
    cout <<soluong << endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<HOCSINH>info(n);
    import(n,info);
    int soluong = up(info);
    exp(info,soluong);
    return 0;
}