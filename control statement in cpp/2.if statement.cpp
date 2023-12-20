#include<iostream>
using namespace std;

int main()
{
    int age;
        cout<<"Entre your Age For Vaccination:";
    cin>>age;
    if(age>=18)
    {
        cout<<" you Are Eligible For Vaccination";
    }
    else
    {
         cout<<" you Are Not Eligible For Vaccination";
    }
    return 0;
}
