#include<iostream>
#include<conio.h>
using namespace std;

class circle
{
public:
    float Rad,Area,circum;
    circle();
    circle(float);
    circle(circle &);

    void Area_Of_circle();
    void Circumference_Of_circle();
    void Display_Details();
    ~circle();
private:
    float PI;
};
circle::circle()
{
    cout<<"\n Inside default constructor:";
}
circle::circle(float R)
{
    cout<<"\n Inside Parameterized constructor:\n";
      Rad=R;
      Area_Of_circle();
      Circumference_Of_circle();
}
circle::circle(circle &ref)
{
    cout<<"\n Inside Copy Constructor:\n";
        Rad=ref.Rad;
        Area=ref.Area;
        circum=ref.circum;
}

void circle:: Area_Of_circle()
    {
        PI=3.14;
        Area=PI*Rad*Rad;
    }
    void circle:: Circumference_Of_circle()
    {
        PI=3.14;
       circum= 2*PI*Rad;
    }
    void circle::Display_Details()
    {
        cout<<"\n Area of circle:\n"<<Area;
        cout<<"\n Circumference of circle:\n"<<circum;
    }
    circle::~circle()
    {
        cout<<"\n Destructor is called \n";
    }
int main()
{
    circle c1;
    getch();
    circle c2(5);

    c2.Area_Of_circle();
    c2.Circumference_Of_circle();
    c2.Display_Details();
    getch();

    circle c3(c2);
    c3.Area_Of_circle();
    c3.Circumference_Of_circle();
    return 0;
}
