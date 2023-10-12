#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


class Student
{
    public :
            int RNo,Math,Phy,Chem,Total;
            char Name[30];
            float Per;

            Student();
            void showdata();
            ~Student();
};
Student::Student()
{
    cout<<"\nEnter Roll No.:";
    cin>>RNo;
    cout<<"\nEnter student name : ";
    fflush(stdin);
    gets(Name);
    cout<<"\nEnter Mathematics mark :";
    cin>>Math;
    cout<<"\nEnter Physics mark : ";
    cin>>Phy;
    cout<<"\nEnter Chemistry Mark : ";
    cin>>Chem;
}
void Student::showdata()
{
     Total=Math+Phy+Chem;
     Per=Total/3;
     cout<<"\n------------------------------";
     cout<<"\n\tStudent Result";
     cout<<"\n------------------------------";
     cout<<"\nRoll No.          : "<<RNo;
     cout<<"\nName              : "<<Name;
     cout<<"\nMathematics mark  : "<<Math;
     cout<<"\nPhysics mark      : "<<Phy;
     cout<<"\nChemistry mark    : "<<Chem;
     cout<<"\nTotal mark        : "<<Total;
     cout<<"\nPercentage        : "<<Per<<"%";
}
Student::~Student()
{
    cout<<"\nDestructor called";
}
int main()
{
    Student y;
    system("cls");
    y.showdata();
    getch();
    return 0;
}

