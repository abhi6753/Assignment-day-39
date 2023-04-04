// 6. Create two forward lists of int type, and merge them.
#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> l1{1, 2, 3, 4, 5};
    forward_list<int> l2 = {6, 7, 8, 9, 10};
    l1.merge(l2);
    for (auto i : l1)
    {
        cout << i << " ";
    }
    return 0;
}