#include<iostream>
using namespace std;

class A
    {
    public:
        virtual void disp()
        {
            cout<<"its class A";
        }
    };
    class B:public A
    {
    public:
            void disp()
            {
                cout<<"its class B";
            }
     };
     main()
     {
         A*ptr;B obj;
         ptr=&obj;
         ptr->disp();
     }
