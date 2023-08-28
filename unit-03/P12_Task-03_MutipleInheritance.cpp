#include<iostream>
using namespace std;
class Mammels
{
    public:
    void display1()
    {
        cout<<"I am mammal"<<endl;
    }
};
class MarineAnimals
{
    public:
    void display2()
    {
        cout<<"I am a marine animal"<<endl;
    }
};
class BlueWhale:public Mammels,public MarineAnimals
{
     public:
     void display()
     {
        cout<<"I belong to both marine as well as mammels"<<endl;
     }
};
int main()
{
    Mammels mam;
    mam.display1();
    MarineAnimals mar;
    mar.display2();
    BlueWhale bw;
    bw.display();

    //Inherited from Mammels
    bw.display1();
    
    //Inherited from MarineAnimals
    bw.display2();

}