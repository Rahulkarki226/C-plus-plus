#include<iostream>
#include<fstream>
using namespace std;
//Write functon
void write()
{
    ofstream file;
    file.open("sample.txt");
    file<<"my life is good.\n";
    file<<"data is the new currency.\n";
    file<<"The purpose of life is to be happy";
    file.close();
}
//Read function
void read()
{
    ifstream file;
    string data;
    file.open("sample.txt");
    if(!file)
    {
        cout<<"File not exist!";
    }
    cout<<"Readed data:"<<endl;
    while(getline(file,data))
    {
        cout<<data<<endl;
    }
    file.close();
}
int main()
{
    write();
    read();
}
