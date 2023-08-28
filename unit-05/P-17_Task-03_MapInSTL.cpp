#include<iostream>
#include<iterator>
#include<map>
using namespace std;

int main(){
     // empty map container
     map<int,string>map1;

     // insert elements in random order:pair
     map1.insert(pair<int,string>(1,"Rahul"));
     map1.insert(pair<int,string>(2,"karan"));
     map1.insert(pair<int,string>(3,"suraj"));
     map1.insert(pair<int,string>(4,"kamlesh"));
     map1.insert(pair<int,string>(5,"Ram"));
     map1.insert(pair<int,string>(5,"Raghav"));
     map1.insert(pair<int,string>(6,"dev"));
     
     // printing maps
     map<int,string>::iterator itr;
     for(itr=map1.begin();itr!=map1.end();itr++)
     {
        cout<<itr->first
        <<':'<<itr->second<<endl;
     }
     cout<<endl;

     //search element in an map
     auto it=map1.find(3);
     cout<<"Iterator points to "<<it->first
     <<"->"<<it->second<<endl<<endl;

     //assigning the elements from map1 to map2
     map<int,string>map2(map1.begin(),map1.end());

     //remove all elements with key =5
     int num;
     num=map2.erase(5);
     cout<<num<<"elements removed\n";
      for( itr=map2.begin();itr!=map2.end();itr++)
     {
        cout<<itr->first
        <<':'<<itr->second<<endl;
     }
     cout<<endl;

    //size
    cout<<"Size:"<<map2.size()<<endl;

    //max_size()
    cout<<"Max Size:"<<map1.max_size()<<endl;

    //empty():checks if the map is empty or not
    if(map1.empty()==false)
        cout<<"\nMap1 is not empty";
    else
        cout<<"\nMap2 is empty";
    
    // clear
    map1.clear();
    cout<<"\nSize:"<<map1.size()<<endl;
}