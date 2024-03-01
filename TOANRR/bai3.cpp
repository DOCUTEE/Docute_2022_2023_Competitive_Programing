#include<iostream>
#define size 1000
using namespace std;
struct TapR
{
    int x,y;
};
TapR R[size];
void nhapTapX(int X[size],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>X[i];
    }
}
void nhapTapR(TapR R[], int a)
{
    cout<<endl;
    for(int i=0;i<a;i++)
    {
        cout<<"phan tu thu "<< i+1<<" thuoc R :";
        cin>>R[i].x>>R[i].y;
    }
}
bool Kiemtraphanxa(int X[size],TapR R[],int n,int a)
{
    int k;
    int dem=0;
    for(int i=0;i<n;i++)
    {   

        k=X[i];
        for(int j=0;j<a;j++)
        {
            if(R[j].x==k&&R[j].y==k)
            {
                dem++;
            }
        }

    }
    return (dem==n);
}
bool Kiemtrabaccau(TapR R[],int a)
{
    int dem=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(R[i].y==R[j].x)
            {
                int dem=0;
                for(int k=0;k<a;k++)
                {
                    if(R[k].x==R[i].x&&R[k].y==R[j].y)
                    {
                        dem++;
                    }
                }
                if(dem==0) return false;
            }
        }
    }
    return true;

}
bool Kiemtradoixung(TapR R[],int a)
{
    int dem=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(R[i].x==R[i].y)
            {
                dem++;
                break;
            }
            else if(R[j].x==R[i].y&&R[j].y==R[i].x)
            {
                dem++;
            }
        }
    }
    return dem==a;
}
bool Kiemtraphanxung(TapR R[],int n)
{
    for(int i=0;i<n;i++)
    {
    	int dem=0;
       for(int j=0;j<n;j++)
       {
       		if(R[i].x==R[j].y&&R[i].y==R[j].x)
       		{
       			if(R[i].x!=R[i].y)	return false;
			}
	   }
    }
    
    return true;
}
void Bieudien(int X[size],TapR R[],int n,int a)
{
    cout<<"Bieu dien quan he R :"<<endl<<endl;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
           if(i==0&&j==0)
           {
            cout<<"  ";
           }else cout<<' ';
            if(i==0&&j>=1)
            {
                cout<<X[j-1];
            }
            if(j==0&&i>0)
            {
                cout<<X[i-1];
            }
            if(i>=1&&j>=1)
            {
                int dem=0;
              for(int k=0;k<a;k++)
              {
                if(R[k].x==X[i-1]&&R[k].y==X[j-1])
                {
                   dem++;
                }
              }
              if(dem==1) cout<<dem;
              else cout<<0;
            }
        }
        cout<<endl;
    }
}
int main()
{
    int X[size];
    int n,a;
    cout<<"nhap so phan tu cua tap X : ";cin>>n;
    cout<<"nhap so phan tu cua tap R : ";cin>>a;
    cout<<"nhap phan tu thuoc X :";nhapTapX(X,n);
    cout<<"nhap phan tu thuoc R ";nhapTapR(R,a);
    cout<<endl;
    if(Kiemtraphanxa(X,R,n,a))   
        cout<<"R la phan xa!"<<endl;
    else cout<<"R khong phai la phan xa!"<<endl;
    if(Kiemtradoixung(R,a))
        cout<<"R la doi xung !"<<endl;
    else cout<<"R khong phai doi xung !"<<endl;
    if(Kiemtrabaccau(R,a)) 
        cout<<"R la bac cau !"<<endl;
    else cout<<"R khong phai la bac cau !"<<endl;
    if(Kiemtraphanxung(R,a))
        cout<<"R la phan xung !"<<endl;
    else cout<<"R khong phai la phan xung !"<<endl;
    cout<<endl;
    Bieudien(X,R,n,a);
}
