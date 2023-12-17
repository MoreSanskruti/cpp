#include<iostream>
using namespace std;

void showinfo(int age)
{
    cout<<age<<endl;
}
void showinfo(string name)
{
    cout<<name<<endl;
}
void showinfo(double salary)
{
    cout<<salary<<endl;
}
main()
{
    showinfo(20);
    showinfo("shubham");
    showinfo(50000);
}
