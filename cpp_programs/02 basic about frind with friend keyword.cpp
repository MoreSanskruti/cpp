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
        friend void General_Customer();
};
void General_Customer()
{
    cout<<"\n Inside General Customer function"<<endl;
    getch();
    Category cobj;

    cout<<"Category ID= "<<cobj.Cat_ID<<endl;               // Allowed - bcz fun is frind of class

    cout<<"shop ID= "<<cobj.shop_ID<<endl;                  //Allowed - bcz fun is frind of class


    cobj.Accept();                                          //  Allowed - bcz fun is frind of class
    cobj.display(21);                                       // public member function access by outsider of class
    return;
}
int main()
{
    General_Customer();
    getch();
    cout<<"\n back to the main function"<<endl;
    getch();
    return 0;
}
