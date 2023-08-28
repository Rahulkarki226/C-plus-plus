#include<algorithm>
#include<iostream>
#include<vector>
#include<array>
using namespace std;
int main()
{
    //Converting array into vector
    int arr[]={10,20,5,23,42,15};
    int n=sizeof(arr)/sizeof(arr[0]);

    vector<int>v(arr,arr+n);
    
    cout<<"Vector is:";
    for(int i=0;i<n;i++)
       cout<<v[i]<<" ";
    cout<<endl<<endl;

    // Sorting the Vector in Ascending order
    sort(v.begin(),v.end());

    cout<<"Vector after sorting is:";
    for(int i=0;i<n;i++)
       cout<<v[i]<<" ";
    cout<<endl<<endl;

    //Reversing the vector
    reverse(v.begin(),v.end());

    cout<<"Vector after reversing is:";
    for(int i=0;i<6;i++)
        cout<<v[i]<<" ";
    cout<<endl<<endl;

    cout<<"Maximum element of vector is:";
    cout<<*max_element(v.begin(),v.end());
    cout<<endl<<endl;

    cout<<"Minimum element of vector is:";
    cout<<*min_element(v.begin(),v.end());
    cout<<endl<<endl;

    cout<<"Occurrences of 15 in vector:";

    //Counts the occurrences of 20 from 1st to last element
    cout<<count(v.begin(),v.end(),15);
    cout<<endl<<endl;

    //sorting a array
    array<int,5>a{7,8,1,0,2};
    std::sort(a.begin(),a.end());
    cout<<"Sorted array:";
    for(int x:a)
    {
       cout<<x<<" ";
    }
    cout<<endl;

}