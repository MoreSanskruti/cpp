///unary operator overloading ( prefix operator)
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
    void operator++()
    {
        ++num;
    }
};
int main()
{
    test t1;
    ++t1;
    return 0;
}
