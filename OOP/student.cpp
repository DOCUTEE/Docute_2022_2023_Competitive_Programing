#include<iostream>
using namespace std;

class Student {
private:   
    string name;
    int age;
    string gender;
    double gpa;
public:
    Student(string name, int age, string gender, double gpa){
        this -> name = name;
        this -> age = age;
        this -> gender = gender;
        this -> gpa = gpa;
    }
    void display()
    {
        cout << "Name: " << name << '\n';
        cout << "Age: " << age << '\n';
        cout << "Gender: " << gender << '\n';
        cout << "GPA: " << gpa << '\n';
    }
};