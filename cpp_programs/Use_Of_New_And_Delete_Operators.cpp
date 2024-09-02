using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
    int *arr;
    int size;

    cout<<"\n Enter the size of the integer array: ";
    cin>>size;

    cout<<"\n Creating an array of size "<<size<<" ";
    arr = new int[size];

    cout<<"\n Dynamic allocation of memory for array arr is successful.";

    delete arr;
    getch();

    return 0;

}
