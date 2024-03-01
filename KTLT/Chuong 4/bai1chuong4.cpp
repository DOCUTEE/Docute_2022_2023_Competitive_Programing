#include<bits/stdc++.h>

using namespace std;

int minArray(int arr[], int n) {
    if (n == 1) {
        return arr[0]; 
    }
    int minValue = minArray(arr, n-1); 
    return min(minValue, arr[n-1]); 
}

void inputArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    inputArray(arr, n);
    int minValue = minArray(arr, n);
    cout << minValue << endl;

    return 0;
}
