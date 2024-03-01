#include<bits/stdc++.h>
using namespace std;
int a[1000][1000];int m,n;
int check(int i,int j,int dem){
  if(i-dem<0||j-dem<0||i+dem>=m||j+dem>=n)return 0;
    int test=a[i][j-dem];
    for(int y=j-dem;y<=j+dem;y++){
        if(a[i-dem][y]!=test){
            return 0;
        }
        if(a[i+dem][y]!=test){
            return 0;
        }
    }
    for(int x=i-dem;x<=i+dem;x++){
        if(a[x][j-dem]!=test){
            return 0;
        }
        if(a[x][j+dem]!=test){
            return 0;
        }
    }
    return 1+check(i,j,dem+1);
}
int main(){
  cin>>m>>n;
    long long ans=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    
    for(int i=1;i<m-1;i++){
        for(int j=1;j<n-1;j++){
            if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]&&a[i][j+1]==a[i][j-1]){
                //cout<<a[i][j]<<endl;
                //cout<<endl;
                if(check(i,j,1)){
                    ans+=check(i,j,1);
                }
            }
                
            }
        }
        cout<<ans;
  
}