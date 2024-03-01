#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

int solve(int n){
	int sum=0;
	int i=1;
    while (n>1)
	{
 		i++;   
       	if (n % i == 0){
            while (n % i == 0){
                sum =sum + i;
                n = n / i;
            }
        }
    }
    return sum;
}
int factorSum(int n)
{
    while (n!=solve(n)) 
    {
		n = solve(n);
	}
    return n;
}
int main(){
	int n;
	cin >> n;
	cout << factorSum(n);
	return 0;
}
