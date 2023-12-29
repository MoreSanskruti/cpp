#include<iostream>
#include<conio.h>
using namespace std;

class Category
{
    private: int shop_ID;
    void Accept()
    {
        cout<<"\n Enter A Category ID:";
        cin>>Cat_ID;
    }
    protected:
        int Cat_ID;
    public:
        Category()
        {
            this-> shop_ID=100;
            this-> Cat_ID=1;
            cout<<"\n Inside Category Constructor"<<endl;
        }
        ~Category()
        {
            cout<<"\n Inside category Destructor"<<endl;
        }
        void display(int Num)
        {
            cout<<"\n shop_ID is => \t"<<shop_ID<<endl;
            cout<<"\n Inside Base Class Display function =>\t"<<Num<<endl;
        }
};
void General_Customer()
{
    Category cobj;




    cobj.display(21);
    return;
}
int main()
{
    General_Customer();
    getch();
    return 0;
}
