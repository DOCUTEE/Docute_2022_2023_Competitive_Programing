#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Student {
private:
    string name;
    int age;
//private:
// protected:
public: 
    Student(){}
    Student(string name)
    {
        this->name = name;
        cout << name << '\n';
    }
    void display()
    {
        cout << name << '\n';
    }
};
class Array {
public: 
    int* arr;
    int n;
    // khai bao phương thức hủy cho array
    ~Array()
    {
        cout << "Destructor called";
        delete[] arr;
    }
};   
void func1()
{
    Array a;
    a.n = 5;
    a.arr = new int[a.n];
}
int main()
{
    Student me("Quang");
    Student handsome("QuangyeuNgan");
    handsome.display();
    vector<Student>test(5, Student("Toideyne"));
    //func1();
    Array a;
    a.n = 5;
    a.arr = new int[a.n];
    cout <<"end\n";
    return 0;

}
