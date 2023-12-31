#include<iostream>
using namespace std;

int main()
{
            int a=4;
            int* ptr =&a;
            cout<<"\n The Value Of a Is => "<<*(ptr)<<endl;

            int *p =new int (40);
            cout<<"\n The Value At Address p Is => "<<*(p)<<endl;

            int *arr =new int[3];
            arr[0] = 10;
            arr[1] = 20;
            arr[2] = 30;

            delete arr;
            cout<<"\n The Value Of arr[0] Is => "<<arr[0]<<endl;
            cout<<"\n The Value Of arr[1] Is => "<<arr[1]<<endl;
            cout<<"\n The Value Of arr[2] Is => "<<arr[2]<<endl;
            return 0;
}
