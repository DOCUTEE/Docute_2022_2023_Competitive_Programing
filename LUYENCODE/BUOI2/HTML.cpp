#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //========================================
    int arr[16][3] = {{255,255,255},{192,192,192},{128,128,128},{0,0,0},{255,0,0},{128,0,0},{255,255,0},{128,128,0},{0,255,0},{0,128,0},{0,255,255},{0,128,128},{0,0,255},{0,0,128},{255,0,255},{128,0,128}};
    string color[16] = {"White","Silver","Gray","Black","Red","Maroon","Yellow","Olive","Lime","Green","Aqua","Teal","Blue","Navy","Fuchsia","Purple"};
    float min,r,g,b,d;
    string res;
    while ((r != -1) && (g != -1) && (b != -1)){
        cin >> r >> g >> b;
        if (((r != -1) && (g != -1) && (b != -1))){
        min = sqrt(pow((arr[0][0] - r),2) + pow((arr[0][1] - g),2) + pow((arr[0][2] - b),2));
        res = "White";  
        for (int i = 1; i < 16; i++)
        {
            d = sqrt(pow((arr[i][0] - r),2) + pow((arr[i][1] - g),2) + pow((arr[i][2] - b),2));
            if (d < min){
                min = d;
                res = color[i];
            }
        }
        cout << res << endl;
        }
    }
}