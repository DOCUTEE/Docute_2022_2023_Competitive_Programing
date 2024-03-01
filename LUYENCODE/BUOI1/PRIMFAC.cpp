#include <bits/stdc++.h>
using namespace std;
void check(long long n){
    int temp = ceil(sqrt(n));
	long long res[temp], a[temp];
    long long count = 0;
    for (long long i = 2; i <= n; i++){
    	if (n % i == 0){
    		count++;
    		a[count] = i;
    		res[count] = 0;
		while (n % i == 0){
			res[count]++;
    		n /= i;
		}
		if (n == 1) break;
	}
	}
    cout << count << endl;
    for (int j = 1; j <= count; j++) cout << a[j] <<" "<< res[j] << endl;
}
int main (){
    long long n;
    cin >> n;
    check(n);
    return 0;
}