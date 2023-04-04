//4. Write a program to reverse forward list elements.
#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> f1;
    int sum =0;
    for (int x = 0; x < 10; x++)
    {
        f1.push_front(x + 1);
        
    }
    cout<<"Before reverse :"<<endl;
    for(auto i = f1.begin();i!=f1.end();i++)
    {
       cout<<*i<<" ";
    }
    f1.reverse();
    cout<<"After reverse : "<<endl;
    for(auto i = f1.begin();i!=f1.end();i++)
    {
       cout<<*i<<" ";
    }
    return 0;
}