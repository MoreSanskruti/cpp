#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int id;
};
int main()
{
    Student s1;
    s1.name="RAM";
    s1.id=1;
    cout<<"The Name of The Student is "<<s1.name <<"\tAnd His Id Is "<<s1.id;
}
