#include<iostream>
using namespace std;
#include<conio.h>

int main()
{
 int i=9,j=9,x=9;

cout<<"\n pattern is => \n";

for( i=1; i<=x; i++)
{
    for(j=1; j<=x; j++)
    {
        if(i==1 || i==x ||j==(x/2)+1)
        {
           cout<<" * ";
        }
        else
        {
           cout<<"   ";
        }
    }
    cout<<"\n";
}
cout<<"\n\n thanks";
getch();
return 0;
}


