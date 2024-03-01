#include <bits/stdc++.h>
using namespace std;
long long left(long long value, long long k){
    while (value % k != 0){
        if (value % k != 0) value++;
    }
    return value;
}
long long right(long long value, long long k){
    while (value % k != 0){
        if (value % k != 0) value--;
    }
    return value;
}
long long t,result,count4,count7,count11,count28,count44,count77,count308,L,R;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--){
        cin >> L >> R;
        result = 0;
        if (L == 0){
            result = 1;
            L++;
        }
        count4 = (right(R,4) - left(L,4))/4 +1;
        count7 = (right(R,7) - left(L,7))/7 +1;
        count11 = (right(R,11) - left(L,11))/11 +1;
        count28 = (right(R,28) - left(L,28))/28 +1;
        count44 = (right(R,44) - left(L,44))/44 +1;
        count77 = (right(R,77) - left(L,77))/77 +1;
        count308 = (right(R,308) - left(L,308))/308 +1;
        cout << result + count4 + count7 + count11 - count28 - count44 - count77 + count308 << endl;
        
    }   
    return 0;     
}