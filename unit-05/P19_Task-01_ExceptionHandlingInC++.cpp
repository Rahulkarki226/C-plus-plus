#include<iostream>
using namespace std;
// a.    Catch a Divide by zero exception in z = x/y using "throw runtime_error"
void DivisionByZero()
{
    int x=50;
    int y=0;
    double z=0;
    try{
      if(y==0)
      {
        throw runtime_error("Math Error:Attempted to divide by zero\n");
      }
      z=x/y;
    }
      catch(runtime_error& e)
      {
        cout<<"Expception Occurred!\n"<<e.what();
      }
}
int output1()
{
    try{
       throw 'a';
    }
    catch (int x){
        cout << "Caught " << x;
    }
    catch (...)  {
        cout << "Default Exception\n";
    }
    return 0;
    //Output:(Default Exception) as no catch is defined for char variable
}
int output2()
{
        try  {
       throw 'a';
    }
    catch (int x)  {
        cout << "Caught ";
    }
    return 0;
   //Output: terminate called after throwing an instance of 'char'
   //No catch is present to catch char variable
}
// d.Re-throw and catch an exception by creating a separate user defined divide function
//  for condition divide by zero.
double division(int a,int b)
{
  try{
    if(b==0)
    {
      throw"Division by zero condition";
    }
  }
    catch(const char *msg)
    {
       throw;
    }
    return (a/b);
 }

int main()
{
     DivisionByZero();
    //  output1();
    //  output2();
    cout<<endl;
     int x=50;
     int y=0;
     double z=0;
     try
     {
       z=division(x,y);
       cout<<z<<endl;
     }
     catch(const char *msg)
     {
        cerr<<msg<<endl;
     }
     return 0;
     
}