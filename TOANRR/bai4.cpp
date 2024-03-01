#include <bits/stdc++.h>
using namespace std;

void import_relation(int &n, int &m, vector<int> &X, vector<vector<int>> &relation, vector<vector<int>> &visit)
{
    cout << "Nhap so phan tu cua tap X: ";
    cin >> n;
    X.resize(n);
    cout << "Nhap phan tu thuoc X: ";
    for (int i = 0; i < n; i++)
        cin >> X[i];
    cout << "Nhap so phan tu cua tap R: ";
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        if (u != v)
        {
            relation[u].push_back(v); // vector 2 chiều để đánh dấu u đã đi đến những đỉnh nào
            visit[v].push_back(u);    // vector 2 chiều để đánh đấu đỉnh nào đã ghé thăm đỉnh u
        }
    }
}
// hàm kiểm tra đỉnh này có đi đến được tất cả các đỉnh khác hay không ?
bool VisitAll(int check, vector<vector<int>> relation, int n)
{
    return relation[check].size() == n - 1; // phần tử bé nhất là phần tử bé nhất của tập X có thể đi đến tất cả các đỉnh khác
}
// hàm kiểm tra xem tất cả các đỉnh có thể ghé thăm đỉnh này hay không ?
bool AllVisit(int check, vector<vector<int>> visit, int n)
{
    return visit[check].size() == n - 1; // phần tử lớn nhất là phần tử lớn nhất được tất cả các đỉnh ghé thăm
}
// Hàm tìm điểm tối tiểu 
vector<int> minimal_element(vector<int>X, vector<vector<int>> visit)
{
    vector<int>mini;
    for(auto it: X){
        if(visit[it].size() == 0) mini.push_back(it);
    }
    return mini;
}
vector<int> maximal_element(vector<int>X, vector<vector<int>> relation){
    vector<int>maxi;
    for(auto it: X){
        if(relation[it].size() == 0) maxi.push_back(it);
    }
    return maxi;
}
int main()
{
    int n, m;
    vector<vector<int>> relation(1000000), visit(1000000);
    vector<int> X;
    import_relation(n, m, X, relation, visit);
    if (VisitAll(X[0], relation, n))
        cout << X[0] << " la phan tu be nhat" << endl;
    else
        cout << "Khong co phan tu be nhat" << endl;
    if (AllVisit(X[n-1], visit, n))
        cout << X[n-1] << " la phan tu lon nhat" << endl;
    else
        cout << "Khong co phan tu lon nhat" << endl;
    vector<int> maxi = maximal_element(X, relation);
    vector<int> mini = minimal_element(X, visit);
    cout << "Cac diem toi dai la: ";
    for(auto it: maxi) cout << it << " ";
    cout << endl;
    cout << "Cac diem toi tieu la: ";
    for(auto it: mini) cout << it << " ";
    return 0;
}