#include<iostream>
using namespace std;
//Abstract class
class base
{
    public:
    // Pure virtual function
    virtual int add(int a,int b)=0;

};
class child:public base{
    public:
    int add(int a,int b)
    {
        return a+b;
    }
  
};
int main()
{  child g;
   cout<<g.add(3,6)<<endl;
   //base h;
   //as we have a pure virtual function in a base class
   //we cannot create a object of the class
}