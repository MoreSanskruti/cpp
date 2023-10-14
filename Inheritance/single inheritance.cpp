#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class A {
public:
        void func()
        {
        cout<<"Inherited";
        }
};
class B:public A{
};

int main()
{
    B b;
    b.func();
}
