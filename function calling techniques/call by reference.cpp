using namespace std;
#include<iostream>
#include<conio.h>

void reference(int &);

int main()
{
    int No = 10;
    cout<< No << endl;

    reference(No);

    cout<< No << endl;

    getch();
    return 0;
}

void reference(int &Ref)
{
    cout<< "Inside Function....."<< endl;
    Ref++;
}
