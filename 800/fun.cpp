#include<iostream>
#include<fstream>
using namespace std;
struct DATE{
	string ngaysinh;
};
struct HOCSINH{
	char MSHS[6];
	char hoten[31];
	DATE ngaysinh;
	char diachi[51];
	char phai[4];
	string diemtb;
};
void nhapdate(DATE &x){
	getline(cin,x.ngaysinh);
}
void xuatdate(DATE &x){
	cout<<x.ngaysinh;
}
void nhap(HOCSINH &x){
	gets(x.MSHS);
	gets(x.hoten);
	nhapdate(x.ngaysinh);
	gets(x.diachi);
	gets(x.phai);
	getline(cin,x.diemtb);
}
void xuat(HOCSINH &x){
	cout<<x.MSHS<<endl;
	cout<<x.hoten<<endl;
	xuatdate(x.ngaysinh);
	cout<<endl;
	cout<<x.diachi<<endl;
	cout<<x.phai<<endl;
	cout<<x.diemtb;
	cout<<endl;
}
int main(){
	HOCSINH a[50];
	int n,c=0;
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++){
		nhap(a[i]);
		if(stof(a[i].diemtb)>=5.0) c++;}
	for (int i=0;i<n;i++){
		xuat(a[i]);}
	cout << c;
}
