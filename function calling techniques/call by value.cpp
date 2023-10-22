using namespace std;
#include<iostream>
#include<conio.h>

void value(int);

int main()
{
    int No = 10;
    cout<< No << endl;

    value(No);

    cout<< No << endl;

    getch();
    return 0;
}

void value(int i)
{
    cout<< "Inside Function....."<< endl;
    i++;
}

