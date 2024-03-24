#include<iostream>
using namespace std;

int main()
{
    int a=0,b=1,n,c;

    cout<<"\n Enter The Number: ";
    cin>>n;

    cout<<"\nFibonacci series are :";
    for(int i=0;i<=n;i++)
    {
        cout<<"\n"<<a;
        c=a+b;
        a=b;
        b=c;
    }
}
