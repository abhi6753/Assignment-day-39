//1. Write a c++ code, to demonstrate the forward list.
#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
	forward_list<int> l1={1,2,3,4,5};
	//l1.assign({1,2,3,4,5});
    forward_list<int> l2;
    forward_list<int> l3;
    forward_list<int>::iterator x;
	for(x = l1.begin();x!=l1.end();x++)
    {
    	cout<<*x<<" ";
	}
	cout<<endl;
	l2.assign(5,10);
	for(x = l2.begin();x!=l2.end();x++)
    {
    	cout<<*x<<" ";
	}
	cout<<endl;
	l3= l1;
	for(x = l3.begin();x!=l3.end();x++)
    {
    	cout<<*x<<" ";
	}
	cout<<endl;
	x =l3.begin();
	l3.insert_after(++x,{59,50});
	for(x = l3.begin();x!=l3.end();x++)
    {
    	cout<<*x<<" ";
	}
	cout<<endl;
	x=l3.begin();
	l3.erase_after(x);
	for(x = l3.begin();x!=l3.end();x++)
    {
    	cout<<*x<<" ";
	}
	cout<<endl;
	return 0;
}

