#include <bits/stdc++.h>
using namespace std;
int arr[105],n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    int count = 0,max = 0;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    for (int x = 1; x <= n; x++)
        for (int y = x; y <= n; y++){
        count = 0;
            for (int z = 1; z <= n;z++)
            if (z>=x && z<=y){
                if (arr[z] == 0) count++;
            } else if (arr[z] == 1) count++;
        if (count > max) max = count;
        }
    cout << max;
}