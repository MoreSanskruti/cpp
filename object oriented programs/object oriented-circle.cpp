using namespace std;
#include<iostream>
#include<conio.h>
#include<stdio.h>

class Circle
 {
 public:
    float Rad;
    Circle()
    {
         Rad = Area = Circum = 0;
        PI=3.14;

        cout<<"\n Inside our circle class default constructor"<<endl;

    }
    Circle(float R)
    {
        Rad=R;
        PI=3.14;
        Calculate_Area_And_Circum();
        cout<<"\n Inside our circle class Parameterized constructor"<<endl;
    }
    ~Circle()
    {
        cout<<"\n Inside our circle class destructor- for object width Radius="<<endl;
    }
    void Calculate_Area_And_Circum()
    {
        Area_of_Circle();
        Circumference_of_Circle();
    }
    void Display_Details()
    {
        cout<<"\n Details of circle are =>"<<endl;

        cout<<"\n\n\t Radius                   ="<<Rad;
        cout<<"\n\n\t Area of Circle           ="<<Area;
        cout<<"\n\n\t Circumference of Circle  ="<<Circum;

        cout<<"\n\n=========================================\n\n";
    }
 private:
    float PI, Area, Circum;

    void  Area_of_Circle()
    {
        Area =PI*Rad*Rad;
    }

    void  Circumference_of_Circle()
    {
        Circum=2*PI*Rad;
    }
 };
 int main()
 {
    float R =0.0;
    Circle obj1;

    obj1.Rad =7;
    obj1.Calculate_Area_And_Circum();

    obj1.Display_Details();

    getch();

    cout<<"\n Enter Radius For New Object =";
    cin>> R;

    Circle obj2(R);

    obj2.Display_Details();

    getch();
    return 0;
    }
