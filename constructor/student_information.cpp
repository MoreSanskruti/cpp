#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;

class student
{
    private:
    char Name[50];
    int Rno;
    long long int Pno;
public:

    student();
    student(char N[],int R,long long int P);
    student(student &);

    void getdata();
    void display_details();
    ~student();
};
student::student()
{
    cout<<"\n---Inside Default Constructor---"<<endl;
    strcpy(Name,"Sanskruti");
    Rno=101;
    Pno=987689674;
}
student::student(char N[],int R,long long int P)
{
    cout<<"\n---Inside parameterized Constructor---"<<endl;
    strcpy(Name,N);
    Rno=R;
    Pno=P;
    display_details();
}
student::student(student & ref)
{
    cout<<"\n---Inside Copy Constructor---"<<endl;
    strcpy(Name,ref.Name);
    Rno = ref.Rno;
    Pno = ref.Pno;
}
student::~student()
{
    cout<<"\n Destructor is called"<<Rno;
}

void student:: getdata()
{
    cout<<"Enter Your Name:";
    gets(Name);

    cout<<"Enter Your Roll No:";
    cin>>Rno;

    cout<<"Enter Your Phone number:";
    cin>>Pno;
}
void student:: display_details()
    {
        cout<<"Name:"<<Name<<endl;
        cout<<"\nRoll No:"<<Rno<<endl;
        cout<<"\nPhone Number:"<<Pno<<endl;
    }
int main()
{
    student s1;
    s1.display_details();
    getch();

    student s2("yash",102,8956245128);
    getch();

    student s3(s1);
    s3.display_details();

    return 0;
}
