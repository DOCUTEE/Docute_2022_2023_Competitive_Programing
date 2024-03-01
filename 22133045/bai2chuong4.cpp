#include <iostream>
#include <vector>
using namespace std;

#define int long
#define endl '\n'

int sumVector(vector<int>& v, int n)
{
    if (n == 0) {
        return 0;
    } else {
        return v[n-1] + sumVector(v, n-1);
    }
}
void inputVector(vector<int>& v, int n)
{
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
}
void outputSum(int sum)
{
    cout << sum << endl;
}

signed main()
{
    int n;
    cin >> n;
    vector<int> v;
    inputVector(v, n);
    int sum = sumVector(v, n);
    outputSum(sum);
    return 0;
}
