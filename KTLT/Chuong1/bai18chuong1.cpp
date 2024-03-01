#include <bits/stdc++.h>
using namespace std;
void create() {
    ofstream outfile("SONGUYEN.INP");
    srand(time(0));
    for (int i = 0; i < 10000; i++) {
        int num = rand() % 32767 + 1; 
        outfile << num << endl;
    }
    outfile.close();
}

int main() {
    create();
    return 0;
}
