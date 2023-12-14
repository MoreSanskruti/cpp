#include<iostream>
using namespace std;

class student
{
private:
    char name[20];
    int rollno;
    double phoneNumber;

public:
    void getdata();
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll no:"<<rollno<<endl;
        cout<<"Phone no:"<<phoneNumber<<endl;
    }
};
void student::getdata(void)
{
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter Roll No:";
    cin>>rollno;
    cout<<"Enter Phone No:";
    cin>>phoneNumber;
}
int main()
{
    student s;
    s.getdata();
    s.display();
    return 0;
}
