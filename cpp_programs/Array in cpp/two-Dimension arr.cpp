//2-d array

#include<iostream>
using namespace std;

int main()
{
    int arr[3][5]={ {7,8,9,4,3},
                    {10,12,23,34,45},
                    {4,5,6,7,8}};

         for(int i=0;i<3;i++)
         {
             for(int j=0;j<5;j++)
             {
                 cout<<"The Value At"<<i<<","<<j<<"is"<<arr[i][j]<<endl;
             }
         }
    }

