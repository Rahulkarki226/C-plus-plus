// Consider above scenario and perform given tasks: 
// 1- Try to call base class add (int, float) method from child class reference/pointer
// 2- Try to call base class add (int, float) method from base class reference/pointer 
#include<iostream>
using namespace std;
class base
{
    public:
    double add(int a,double b)
    {
        return a+b;
    }
};
class child:public base{
    public:
    using base::add;
    double add(int a,int b)
    {
        return a+b+6.9;
    }
};
int main()
{
  child b,*p;
  p=&b;
  cout<<p->add(3,7.8)<<endl;
  base d,*y;
  y=&d;
  cout<<p->add(3,4.6)<<endl;
}