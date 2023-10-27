#include<iostream>
using namespace std;
class student
{
    int rno;
    char name[50];
    double fee;
public:
    student()
    {
        cout<<"Enter Roll No:";
        cin>>rno;
        cout<<"Enter The Name:";
        cin>>name;
        cout<<"Enter The Fee: ";
        cin>>fee;

    }
    void display()
    {
        cout<<endl<<rno<<"\n"<<name<<"\n"<<fee;
    }
};
int main()
{
    student s;
    s.display();
    return 0;
}
