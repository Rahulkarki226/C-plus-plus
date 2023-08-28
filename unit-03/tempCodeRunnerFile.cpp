#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"Constructor of A"<<endl;
    }
};
class B:virtual public A
{
    public:
    B()
    {
        cout<<"Constructor of B"<<endl;
    }
     void display()
    {
        cout<<"Display of B";
    }
};
class C:virtual public A
{
    public:
    C()
    {
        cout<<"constructor of C"<<endl;
    }
    void display()
    {
        cout<<"Display of C";
    }

};
class D: public B, public C
{
    public:
    D()
    {
        cout<<"Constructor of D"<<endl;
    }
   
};
// 1-Diamond problem:
// Without virtual inheriting the class D will inherit A two times 
// which will create ambiguity
int main()
{
  D obj;
// obj.display() ERROR
// ambiguity generated due to  same function present in both 
// inherited classes
   obj.C::display();
}