#include<iostream>
#include<conio.h>
using namespace std;

class Category
{
public:
    Category()
    {
        cout<<"\n Inside Category Constructor"<<endl;
    }
    ~Category()
    {
       cout<<"\n Inside Category Destructor"<<endl;
    }
    virtual void display(int)=0;
    void accept()
    {
        int no=0;
        cout<<"\n Enter a number:";
        cin>>no;
    }
};
class Product:public Category
{
private:
    int P_ID;
public:
    int Cat_ID;
    Product()
    {
        this->P_ID=0;
        this->Cat_ID=0;
        cout<<"\n Inside Product constructor"<<endl;
    }
    ~Product()
    {
        cout<<"\n Inside Product Destructor"<<endl;
    }
    void display(int num)
    {
        cout<<"\n Inside derived class display function "<<num<<endl;
    }
};
int main()
{
    Product pobj;

    pobj.display(5);
    pobj.accept();

    cout<<"\n back to main()"<<endl;

    getch();
    return 0;
}

