#include<bits/stdc++.h>
using namespace std;
void create() {
    ofstream outfile("SONGUYEN.INP");
    for (int i = 0; i < 100; i++) {
        outfile << i << endl;
    }
    outfile.close();
}
void show() {
    ifstream infile("SONGUYEN.INP");
    ofstream outfile_chan("SOCHAN.OUT");
    ofstream outfile_le("SOLE.OUT");
    int num;
    while (infile >> num) {
        if (num % 2 == 0) {
            outfile_chan << num << endl;
        } else {
            outfile_le << num << endl;
        }
    }
    infile.close();
    outfile_chan.close();
    outfile_le.close();
}

int main() {
    create();
    show();
    return 0;
}
