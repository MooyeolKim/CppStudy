#include <iostream>
#include <list>
using namespace std;

int main(void)
{
	list<int> linked_list;
	for(int i=0 ; i<6 ; ++i)
	{
		linked_list.push_back(i);
	}

	list<int>::iterator it = linked_list.begin();
	while(it!=linked_list.end())
	{
		cout << *it++ << endl;
	}

	it = linked_list.begin();
	++it;

	linked_list.insert(it, 10);
	//linked_list.erase(it);

	cout << endl;

	it = linked_list.begin();
	while(it!=linked_list.end())
	{
		cout << *it++ << endl;
	}
	
	return 0;
}
	
	