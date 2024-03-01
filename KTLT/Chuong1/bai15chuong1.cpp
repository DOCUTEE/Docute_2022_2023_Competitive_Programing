#include<bits/stdc++.h>
using namespace std;

struct Component {
    string name;
    string specs;
    int type;
    int price1;
    int price2;
};
void input(vector<Component>& components) {
    int n;  
    cin >> n;
    components.resize(n);
    cin.ignore();
    for (int i = 0; i < n; i++) {
        getline(cin, components[i].name);
        getline(cin, components[i].specs);
        cin >> components[i].type;
        cin >> components[i].price1;
        cin >> components[i].price2;
        cin.ignore();
    }
}
void output(vector<Component>& components) {
    sort(components.begin(), components.end(), [](const Component& a, const Component& b) {
        if (a.type != b.type) return a.type < b.type;
        return a.name < b.name;
    });
    for (int i = 0; i < components.size(); i++) {
        cout << components[i].name << " " << components[i].specs << " ";
        if (components[i].type == 1) {
            cout << components[i].price1 << endl;
        } else {
            cout << components[i].price2 << endl;
        }
    }
}

bool enough_parts(vector<Component>& components) {
    int count_type1 = 0;
    for (int i = 0; i < components.size(); i++) {
        if (components[i].type == 1) {
            count_type1++;
        }
    }
    return count_type1 >= 10;
}

int main() {
    vector<Component> components;
    input(components);
    output(components);
    if (enough_parts(components)) cout << "1";
    else cout << "0";
    return 0;
}
