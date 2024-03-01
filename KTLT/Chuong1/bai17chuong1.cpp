#include <bits/stdc++.h>
using namespace std;
void create() {
    ofstream outfile("SONGUYEN.INP", ios::binary);
    srand(time(NULL)); 
    for (int i = 0; i < 10000; i++) {
        int num = rand() % 32767 + 1; 
        outfile.write((char*)&num, sizeof(num));
        if ((i+1) % 10 == 0) outfile << endl;
    }
    outfile.close();
}

void process() {
    ifstream infile("SONGUYEN.INP", ios::binary);
    ofstream outfile("SONGUYEN.OUT");
    int num;
    int arr[10000];
    int i = 0;
    while (infile.read((char*)&num, sizeof(num))) {
        arr[i] = num;
        i++;
    }
    sort(arr, arr + 10000);
    for (int i = 0; i < 10000; i++) {
        outfile << arr[i] << endl;
    }
    infile.close();
    outfile.close();
}

int main() {
    create();
    process();
    return 0;
}
