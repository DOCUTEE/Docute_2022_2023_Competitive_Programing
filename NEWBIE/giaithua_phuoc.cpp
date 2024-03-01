#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x, n;
    float e=1, giaithua = 1;
    cout<<"Nhap so giai thua n:";
    cin>>n;
    if(n == 0){giaithua = 1;}
        else
            for (int x = 1; x <= n; x++)
            {
                giaithua = giaithua * x;
                
                e = e + (1/giaithua);
            }
        cout << giaithua << endl;
        cout<<"Gia tri cua e "<<e;     
    return 0;
}