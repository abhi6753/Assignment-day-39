// 9. Write a C++ code to demonstrate working of splice_after() in forward list.
#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> f = {3, 2, 9}, f2 = {8, 1, 2};
    f.splice_after(f.begin(), f2);
    cout << "First Forward list :" << endl;
    for (auto i : f)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Second Forward list :" << endl;
    for (auto i : f2)
    {
        cout << i << " ";
    }
    return 0;
}