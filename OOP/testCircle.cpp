#include "Circle.cpp"
#include <iostream>

using namespace std;

int main()
{
    Circle me(5);
    cout << me.getArea() << '\n';
    cout << me.getCircumference() << '\n';
    return 0;
}