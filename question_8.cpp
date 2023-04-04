//8. Create two forward lists of int type, and swap the elements of both forward lists with each other.
#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
 forward_list<int> f = {3, 2, 9}, f2 = {8, 1, 2};
   f.swap(f2);
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