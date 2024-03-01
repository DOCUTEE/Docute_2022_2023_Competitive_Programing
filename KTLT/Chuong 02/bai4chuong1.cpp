#include <bits/stdc++.h>
using namespace std;

struct DATE {
    int day; 
    int month;
    int year;
};

bool isLeapYear(int year) {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) return true;
    return false;
}
bool isValidDate(DATE date) {
    if (date.month < 1 || date.month > 12) return false;
    int daysInMonth;
    switch (date.month) {
        case 2:
            daysInMonth = isLeapYear(date.year) ? 29 : 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            daysInMonth = 30;
            break;
        default:
            daysInMonth = 31;
            break;
    }
    if (date.day < 1 || date.day > daysInMonth) return false;

    return true;
}
int daysInYear(int year) {
    if (isLeapYear(year)) return 366;
        else return 365;
}
int daysInMonth(int month, int year) {
    switch (month) {
        case 2:
            return isLeapYear(year) ? 29 : 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}
int daysFromStartOfYear(DATE date) {
    int days = 0;
    for (int month = 1; month < date.month; month++) days += daysInMonth(month, date.year);
    days += date.day - 1;
    return days;
}
int daysBetweenDates(DATE date1, DATE date2) {
    int days1 = daysFromStartOfYear(date1);
    int days2 = daysFromStartOfYear(date2);
    days1 = daysInYear(date1.year) - days1;
    days2 = daysInYear(date2.year) - days2;
    int daysBetweenYears = 0;
    for (int year = date1.year + 1; year < date2.year; year++) {
        daysBetweenYears += daysInYear(year);
    }
    int totalDays = days1 + days2 + daysBetweenYears;
    return totalDays;
}

int main() {
    DATE date1, date2;
    cin >> date1.day >> date1.month >> date1.year;
    cin >> date2.day >> date2.month >> date2.year;
    if (!isValidDate(date1)) {
        cout << "-1" << endl;
        return 0;
    }
    int days = daysBetweenDates(date1, date2);
    cout << days<< endl;
    return 0;
}
