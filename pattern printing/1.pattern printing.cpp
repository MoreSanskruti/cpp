#include<iostream>
using namespace std;

void halfpyramidpattern1(int n)
{

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
   int num;
   cout<<"Enter number of levels of pattern:"<<endl;
   cin>>num;
   halfpyramidpattern1(num);
   cout<<endl;
   return 0;
}
