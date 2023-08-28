
// 3- Fix your code in such a way so, child clsss add (int,int) will always be called 

#include<iostream>
using namespace std;
class base
{
    public:
    virtual double add(int a,double b)
    {
        return a+b;
    }
};
class child:public base{
    public:
    
    double add(int a,double b)
    {
        return a+b+7.9;
    }
};
int main()
{
  base *p;
  child d;
  p=&d;
  cout<<p->add(3,7.8)<<endl;
}