///unary operator overloading ( postfix operator)
#include<iostream>
using namespace std;

class test
{
  int num;
  public:
    test()
    {
        num=0;
    }
    void operator++(int)
    {
        ++num;
    }
};
int main()
{
    test t1;
    t1++;
    return 0;
}

