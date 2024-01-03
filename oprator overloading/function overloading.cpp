#include<iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}
double add(double a,double b)
{
    return a+b;
}
int main()
{
    cout<<"The Addition Value Is: "<<add(3,4)<<endl;
    cout<<"The Addition Value Is: "<<add(3.3,4.4);
}
