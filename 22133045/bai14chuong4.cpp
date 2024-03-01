#include <iostream>
#include <string>
using namespace std;

void generate(int n, int m, string s, int cnt, int depth) {
    if (s.length() == m) {
        if (cnt == 0 && depth == n) {
            cout << s << endl;
        }
        return;
    }
    // thêm dấu ngoặc mở
    if (cnt < n && (s.empty() || s[0] == '(')) {
        generate(n, m, "(" + s, cnt + 1, max(depth, cnt + 1));
    }
    // thêm dấu ngoặc đóng
    if (cnt > 0) {
        generate(n, m, ")" + s, cnt - 1, depth);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    generate(n, m, "", 0, 0);
    return 0;
}
