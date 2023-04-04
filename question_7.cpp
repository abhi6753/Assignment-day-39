// 7. Below are two forward lists, first sort them and then merge them.
//  forwardlist1={3,2,9}
//  forwardlist2={8,1,2}
#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> f = {3, 2, 9}, f2 = {8, 1, 2};
    f.sort();
    f2.sort();
    f.merge(f2);
    for (auto i : f)
    {
        cout << i << " ";
    }
    return 0;
}
