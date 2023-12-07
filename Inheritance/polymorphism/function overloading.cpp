#include<iostream>
using namespace std;

class forkinfosystem
{
public:
    void fun()
    {
    cout<< "i am function with no argument."<<endl;
    }
    void fun(int x)
    {
      cout<< "i am function with int argument."<<endl;
    }
    void fun(double x)
    {
    cout<<"i am function with double argument."<<endl;
    }
};
int main()
{
  forkinfosystem obj;
  obj.fun();
  obj.fun(4);
  obj.fun(6.3);
  return 0;
}
