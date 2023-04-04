// 3. Create a forward list insert elements from 1 to 10 and find the sum of elements.
#include <iostream>
#include <forward_list>
#include <numeric> // for using accumulate function
using namespace std;
int main()
{
    forward_list<int> f1;
    for (int x = 0; x < 10; x++)
    {
        f1.push_front(x + 1);
    }
    f1.reverse();
    for (auto i = f1.begin(); i != f1.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    cout << "Sum of nums: " << accumulate(f1.begin(), f1.end(), 0) << '\n';
    return 0;
}