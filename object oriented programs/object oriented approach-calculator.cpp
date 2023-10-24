using namespace std;
#include<iostream>
#include<conio.h>
#include<stdio.h>

class Calculator
{
public:
    int No1,No2,Ans;
    Calculator();
    Calculator(int N1, int N2);
    void Add();
    void Sub();
   ~Calculator();

};
Calculator::Calculator()
{
    cout<< endl<<"\n inside Default constructor !!!!"<< endl;
    No1 = No2 = Ans = 0;
}
Calculator::Calculator(int N1, int N2)
{
   cout<< endl<<"\n Inside Parameterized Constructor !!!!"<<endl;
    No1 = N1 ;No2 = N2 ;Ans = 0;
}
void Calculator:: Add()
{
    Ans = No1 + No2;
}
void Calculator:: Sub()
{
     Ans = No1 - No2;
}
Calculator :: ~Calculator()
{
  cout<< endl<<"\n Inside Destructor of our calculator class!!!!"<<endl;
   No1 = No2 = Ans = 0;
}
int main()
{
    Calculator obj1;

   cout <<"\n Enter first number = ";
   cin>>obj1.No1;
   cout <<"\n Enter Second number = ";
   cin>>obj1.No2;

   obj1.Add();

   cout<< endl<<"Addition of "<<obj1.No1<<"&"<<obj1.No2<<"is ="<<obj1.Ans<<endl;
   getch();

   obj1.Sub();

   cout<< endl <<"Subtraction of "<<obj1.No1<<"&"<<obj1.No2<<"is ="<<obj1.Ans<<endl;
   Calculator obj2(100,53);

   obj2.Add();

   cout<< endl <<"Addition of "<<obj2.No1<<"&"<<obj2.No2<<"is ="<<obj2.Ans<<endl;
   getch();

   obj2.Sub();

   cout<< endl <<"Subtraction of "<<obj2.No1<<"&"<<obj2.No2<<"is ="<<obj2.Ans<<endl;
   getch();
   return 0;
}






