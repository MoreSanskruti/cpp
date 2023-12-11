#include<iostream>
using namespace std;

void halfpyramidpattern2(int n)
{

    for(int i=n;i>=1;i--)
    {
        for(int j=i;j>0;j--)
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
   halfpyramidpattern2(num);
   cout<<endl;
   return 0;
}
