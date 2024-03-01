#include<bits/stdc++.h>
using namespace std;
struct Point {
    double x;
    double y;
};
void import(Point &a){
    cin >> a.x >> a.y;
}
Point Yaxis(Point a) {
    Point result;
    result.x = -a.x;
    result.y = a.y;
    return result;
}

Point Xasis(Point a) {
    Point result;
    result.x = a.x;
    result.y = -a.y;
    return result;
}
Point center(Point a) {
    Point result;
    result.x = -a.x;
    result.y = -a.y;
    return result;
}
double distance(Point a, Point p2) {
    return sqrt(pow(a.x - p2.x, 2) + pow(a.y - p2.y, 2));
}
void show(Point a, double dis){
    cout << a.x << " " << a.y << endl;
    cout << dis << endl;
    
}
int main() {
    Point a;
    Point result;
    import(a);
    result = Yaxis(a);
    double dis = distance(a, result);
    show(result, dis);
    result = Xasis(a);
    dis = distance(result, a);
    show(result, dis);
    result = center(a);
    dis = distance(result, a);
    show(result, dis);
    return 0;
}
