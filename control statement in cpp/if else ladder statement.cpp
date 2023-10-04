#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"Enter marks :";
    cin>>marks;
    if(marks>75)
        cout<<"Distinction";
    else if(marks>=60)
        cout<<"First class";
    else if(marks>=45)
        cout<<"second class";
    else
        cout<<"Fail";

    return 0;

}
