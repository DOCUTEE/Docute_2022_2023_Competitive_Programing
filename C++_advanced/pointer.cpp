#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n,m;
	int** arr;
    arr = new int* [m];
    cin >> n >> m;
    for(int i = 0; i < n;i++)
    {
        arr[i] = new int[m];
    }
    //int* sum = new int[n]; 
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = 0; j < m; j++) 
        {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
        cout << sum << "\n";
    }
    for(int i = 0; i < n; i++)
    {
        delete[]arr[i];
    }

    //delete[]sum;
	delete[]arr;
	return 0;
}
