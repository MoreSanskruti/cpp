#include<iostream>
using namespace std;
#include<conio.h>

int main()
{
 int i=5,j=5,x=5;

cout<<"\n pattern is => \n\n";

for( i=1; i<=x; i++)
{
    for(j=1; j<=x; j++)
    {
        if(j==1 || j==x ||i==(x/2)+1)
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

