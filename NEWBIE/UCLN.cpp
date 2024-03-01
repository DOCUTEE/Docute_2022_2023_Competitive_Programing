#include <iostream> 
using namespace std;
int UCLN(int a, int b){
    if (b==0) return a;
    else return UCLN( b , a % b);
}
int main(){
    cout << UCLN(5,9);
    return 0;

}