#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    short *p = (short *)&arr[0];
    cout << *(p + 4);
    return 0;
}