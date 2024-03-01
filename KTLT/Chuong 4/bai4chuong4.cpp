#include<bits/stdc++.h>
using namespace std;

#define int long
#define endl '\n'

int binarySearch(vector<int>& v, int l, int r, int x)
{
    sort(v.begin(),v.end());
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (v[mid] == x) return mid;
        if (v[mid] > x) return binarySearch(v, l, mid - 1, x);
        return binarySearch(v, mid + 1, r, x);
    }
    return -1;
}

void inputVector(vector<int>& v, int n)
{
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
}

void outputResult(int result)
{
    cout << result;
}

signed main()
{
    int n, x;
    vector<int> v;
    cin >> n;
    inputVector(v, n);
    cin >> x;
    int result = binarySearch(v, 0, n - 1, x);
    outputResult(result);
    return 0;
}
