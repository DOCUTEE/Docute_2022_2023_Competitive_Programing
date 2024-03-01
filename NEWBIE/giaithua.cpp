#include <iostream>
using namespace std;
int giaithua(int n){
    if (n==1) return 1;
    else return n*giaithua(n-1);
}
int main (){
    cout<<giaithua(5);
    return 0;    
}