// 2. Write a c++ code, in which create a forward list and assign values to it at the time of
// initialization and print it on the console screen.
#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> f1 ={1,2,30,4,5};
    for(auto i : f1)
    {
       cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
