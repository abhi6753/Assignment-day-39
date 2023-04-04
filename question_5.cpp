//5. Write a program remove all consecutive duplicate elements from the forward list
#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
  forward_list<int> l{1,2,3,4,4,6,5,7,7,8};
  cout<<"Before forward list : "<<endl;
  for(auto i:l)
  {
   cout<<i<<" ";
  }
  cout<<endl;
  l.unique();
  cout<<"After forward list : "<<endl;
  for(auto i:l)
  {
   cout<<i<<" ";
  }
  cout<<endl;
  return 0;
}