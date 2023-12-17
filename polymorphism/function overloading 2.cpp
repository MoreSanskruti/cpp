#include<iostream>
using namespace std;

int intSum(int x, int y)
{
    return x+y;
}
double doubleSum(double x, double y)
{
    return x+y;
}
int main()
{
    int num_value=intSum(5,10);
    double double_value= doubleSum(5.5, 10.5);
    cout<<"Int:"<<num_value<<"\n";
    cout<<"Double:"<<double_value;
    return 0;
}
