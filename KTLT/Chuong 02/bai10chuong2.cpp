#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
struct DATE
{
    bool check;
    int day;
    int month;
    int year;
};
void import(int &day, int &month, int &year)
{
    cin >> day >> month >> year;
}
bool isLeap(int year)
{
    if (year % 4)
        return false;
    else if (year % 100 != 0)
        return true;
    else if (year % 400 != 0)
        return false;
    else
        return true;
}
int dayInMonth(int month, int year)
{
    if (month == 2)
    {
        if (isLeap(year))
            return 29;
        else
            return 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return 31;
}
int checkDay(int day, int month, int year)
{
    int temp = dayInMonth(month, year);
    if (day < 1 || day > temp)
        return false;
    else if (month < 1 || month > 12)
        return false;
    else if (year < 1 || year > 9999)
        return false;
    return true;
}
DATE solve(int day, int month, int year)
{
    DATE result = {false, day, month, year};
    if (checkDay(day, month, year))
    {
        day++;
        if (day > dayInMonth(month, year))
        {
            day = 1;
            month++;
            if (month > 12)
            {
                month = 1;
                year++;
            }
        }
        result.check = true;
        result.day = day;
        result.month = month;
        result.year = year;
    }
    return result;
}
void exp(DATE valid)
{
    if (valid.check)
    {
        cout << valid.day << " " << valid.month << " " << valid.year << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int day, month, year;
    import(day, month, year);
    DATE valid = solve(day, month, year);
    exp(valid);
}