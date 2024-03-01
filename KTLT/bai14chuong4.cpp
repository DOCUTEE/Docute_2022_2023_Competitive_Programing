#include<bits/stdc++.h>
using namespace std;

vector<int> a(100, 0);
int n;

void printPermutation()
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void solve(int k)
{
    if (k == n + 1)
    {
        printPermutation();
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        bool flag = true;
        for (int j = 1; j < k; j++)
        {
            if (a[j] == i)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            a[k] = i;
            solve(k + 1);
        }
    }
}

int main()
{
    cin >> n;
    solve(1);
    return 0;
}
