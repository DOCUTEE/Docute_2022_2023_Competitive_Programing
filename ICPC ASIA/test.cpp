#include<bits/stdc++.h> 

int bonus(int n,int k,int a[55][55]){
    int s=0;
    int bn=0;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
            s=0;
			for (int m=i;m<(i+k-1);m++){
		        for (int n=j;n<(i+k-1);n++){
                    s=s+a[i][j];
			    }
            }
            if (s>bn) bn=s;
		}
    }
    return bn;
}
int main(){
    int n,k;
    std::cin>>n;
    std::cin>>k;
	int a[55][55];
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			std::cin>>a[i][j];
			}
        std::cout<<"\t";
    }
    std::cout<< bonus(n,k,a);
}