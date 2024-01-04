#include<iostream>
using namespace std;

int main()
{
    int x=6;
    int *p;
    p=&x;
    cout<<"\n The Address Of The Variable"<<p<<endl;
    cout<<*p<<endl;
    cout<<x<<endl;
    cout<<&x;
}
