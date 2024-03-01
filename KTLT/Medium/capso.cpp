#include <iostream>
#include <string>
using namespace std;

string divideLargeNumbers(string dividend, string divisor) {
    // Kiểm tra dividend có phải là 0 không
    if (dividend == "0") {
        return "0";
    }

    // Kiểm tra divisor có phải là 0 không
    if (divisor == "0") {
        return "Undefined";
    }

    // Khởi tạo kết quả ban đầu
    string quotient = "";

    // Xử lý các ký tự một cách tuần tự
    for (int i = 0; i < dividend.length(); i++) {
        int digit = dividend[i] - '0'; // Chuyển ký tự thành số

        // Thực hiện phép chia cho divisor
        int temp = digit + (i > 0 ? (quotient[quotient.length() - 1] - '0') * 10 : 0);
        quotient += to_string(temp / (divisor[0] - '0'));
        temp %= (divisor[0] - '0');

        // Cập nhật dividend
        dividend[i] = temp + '0';
    }

    // Xử lý trường hợp có số 0 ở đầu kết quả
    int i = 0;
    while (quotient[i] == '0') {
        i++;
    }
    quotient = quotient.substr(i);

    return quotient;
}

int main() {
    string dividend, divisor;
    cout << "Nhập số bị chia: ";
    cin >> dividend;
    cout << "Nhập số chia: ";
    cin >> divisor;

    string result = divideLargeNumbers(dividend, divisor);
    cout << "Kết quả: " << result << endl;

    return 0;
}
