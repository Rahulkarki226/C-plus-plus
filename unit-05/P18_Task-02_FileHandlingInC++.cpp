#include<iostream>
using namespace std;
#include<fstream>
// a.Read from a file using fstream [char by char]
void read(string name)
{
    fstream file;
    file.open(name,ios::in);
    if(!file)
        cout<<"No such file";
    else
    {
        char ch;
        while(!file.eof())
        {
            file>>noskipws>>ch;
            cout<<ch;
        }
        cout<<endl<<endl;
        file.close();
    }
}
// b. Write into a file using fstream
void write()
{
    fstream file;
    file.open("write.txt",ios::out);
    if(!file)
    {
        cout<<"File creation failed";
    }
    else{
        cout<<"file created";
        file<<"The purpose of life is to be happy\n";
        cout<<endl;
        file.close();
    }
}
// c.Append into a file using fstream
void append()
{
    fstream file;
    file.open("write.txt",ios::app);
    //append instead of overwrite

    //Insertion Operator(<<)
    file<<"my life is good.\n";
    file<<"data is the new currency.";
    file.close();
}
//count no of character
void character()
{
    fstream file;
    int c=0;
    file.open("write.txt",ios::in);
    if(!file)
       cout<<"No such file";
    else
    {
        char ch;
        while(!file.eof())
        {
            file>>noskipws>>ch;
            c++;
        }
        c--;
        cout<<"Total character:"<<c<<endl;
        file.close();
    }
}
void words()
{
    fstream file;
    int c=1;
    file.open("write.txt",ios::in);
    if(!file)
       cout<<"No such file";
    else
    {
        char ch;
        while(!file.eof())
        {
            file>>noskipws>>ch;
            if(ch=='\n'|ch==' ')
               c++;
        }
        cout<<"Total words:"<<c<<endl;
        file.close();
    }
}
void line()
{
    fstream file;
    int c=1;
    file.open("write.txt",ios::in);
    if(!file)
       cout<<"No such file";
    else
    {
        char ch;
        while(!file.eof())
        {
            file>>noskipws>>ch;
            if(ch=='\n')
                c++;
        }
        cout<<"Total line:"<<c<<endl;
        file.close();
    }
}
int main()
{ 
    cout<<"Readed content:"<<endl;
    read("read.txt");
    write();
    cout<<"Written content:"<<endl;
    read("write.txt");
    append();
    cout<<"appended content:"<<endl;
    read("write.txt");
    character();
    words();
    line();
}
