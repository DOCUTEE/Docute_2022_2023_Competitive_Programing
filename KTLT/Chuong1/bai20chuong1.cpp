#include<bits/stdc++.h>
using namespace std;
void import() {
    ofstream outfile("SOCHAN.DAT");
    for (int i = 0; i <= 100; i += 2) {
        outfile << i << " ";
    }
    outfile.close();
}

void show() {
    ifstream infile("SOCHAN.DAT");
    int count = 0;
    int num;
    while (infile >> num) {
        cout << num << " ";
        count++;
        if (count % 30 == 0) {
            cout << endl;
        }
    }
    infile.close();
}
int main() {
    import();
    show();
    return 0;
}
