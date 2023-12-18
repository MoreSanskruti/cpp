#include<iostream>
#include<conio.h>
using namespace std;

class category
{
public:
        int cat;
        category()
        {
            this->cat=100;
            cout<<"\n Inside category constructor"<<endl;
        }
        ~category()
        {
             cout<<"\n Inside category destructor"<<endl;
        }
        void Display(int Num)
        {
            cout<<"\n Inside Base Class Display Function"<<endl;
        }
};

class product:public category
{
private:
        int P_ID;
public:
        int cat_ID;
        product()
        {
        this->P_ID=0;
        this->cat_ID=21;
        cout<<"\n \n Inside product constructor"<<endl;
        }
         ~product()
        {
             cout<<"\n Inside product destructor"<<endl;
        }
        void Display(int Num)
        {
            cout<<"\n Inside Derived Class Display Function"<<endl;
        }
};
int main()
{
    product obj;

    cout<< obj.cat_ID<<endl;

    cout<< obj.cat<<endl;


    getch();
    return 0;
}
