//10. Write a program to assign values in forward_list using the values of another list
#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
 forward_list<int> f = {3, 2, 9}, f2 ;
  f2.assign(f.begin(),f.end());
   cout<<"First Forward list :"<<endl;
    for (auto i : f)
    {
        cout << i << " ";
    }
    cout<<endl;
    cout<<"Second Forward list :"<<endl;
    for (auto i : f2)
    {
        cout << i << " ";
    }
    return 0;
}
