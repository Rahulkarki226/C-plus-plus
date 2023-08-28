#include<iostream>
#include<list>
using namespace std;
// list Container
int main()
{
  list <int> mylist={3,2,1};
  // does not work in list like this
  // cout<<mylist[0];

  //Iterators
  list<int>::iterator p=mylist.begin();
  cout<< "my list:";
  while(p!=mylist.end())
  {
    cout<<*p<<" ";
    p++;
  }
  cout<<endl;

  //list.size()
  cout<<"Size:"<<mylist.size()<<endl;

  //list.sort()
   mylist.sort();
  cout<<"List after sorting:";
  for(auto itr=mylist.begin();itr!=mylist.end();itr++)
       cout<<*itr<<" ";
  cout<<endl;
  //list.reverse
  mylist.reverse();
  cout<<"List after reversing:";
  for(auto itr=mylist.begin();itr!=mylist.end();itr++)
      cout<<*itr<<" ";
   cout<<endl;
    
}