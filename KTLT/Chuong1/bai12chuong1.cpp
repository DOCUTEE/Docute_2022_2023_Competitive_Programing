#include <bits/stdc++.h>
using namespace std;
struct Movie {
    string title;
    string genre;
    string director;
    string leadActor;
    string leadActress;
    int year;
    string studio;
};
void import(int &n, vector<Movie> &a){
    cin >> n;
    cin.ignore();
    a.resize(n);
    for(auto &x: a){
        getline(cin, x.title);
        getline(cin, x.genre);
        getline(cin, x.director);
        getline(cin, x.leadActor);
        getline(cin, x.leadActress);
        cin >> x.year;
        cin.ignore();
        getline(cin, x.studio);
    }
}
void show(Movie m) {
    cout << m.title << endl;
    cout << m.genre << endl;
    cout << m.director << endl;
    cout << m.leadActor << endl;
    cout << m.leadActress << endl;
    cout << m.year << endl;
    cout << m.studio << endl;
}
void printMovieList(vector<Movie> movieList) {
    for (int i = 0; i < movieList.size(); i++) {
        show(movieList[i]);
    }
}
void searchByGenre(vector<Movie> movieList, string genre) {
    vector<Movie> result;
    for (int i = 0; i < movieList.size(); i++) {
        if (movieList[i].genre == genre) {
            result.push_back(movieList[i]);
        }
    }
    if (result.size() == 0) cout << "-1" << endl;
    else printMovieList(result);
}
void searchByLeadActor(vector<Movie> movieList, string actor) {
    vector<Movie> result;
    for (int i = 0; i < movieList.size(); i++) {
        if (movieList[i].leadActor == actor) {
            result.push_back(movieList[i]);
        }
    }
    if (result.size() == 0) cout << "-1" << endl;
    else printMovieList(result);
}
void searchByDirector(vector<Movie> movieList, string director) {
    vector<Movie> result;
    for (int i = 0; i < movieList.size(); i++) {
        if (movieList[i].director == director) {
            result.push_back(movieList[i]);
        }
    }
    if (result.size() == 0) cout << "-1" << endl;
        else printMovieList(result);
}

int main() {
    vector<Movie> movieList;
    int n;
    import(n,movieList);
    string genre;
    getline(cin, genre);
    searchByGenre(movieList, genre);
    string actor;
    getline(cin, actor);
    searchByLeadActor(movieList, actor);
    string director;
    getline(cin, director);
    searchByDirector(movieList, director);
    return 0;
}

