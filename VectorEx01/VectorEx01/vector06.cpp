#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> dynamic_array;
	for(int i=0 ; i<8 ; ++i)
	{
		dynamic_array.push_back(i);
	}

	vector<int>::reverse_iterator it=dynamic_array.rbegin();
	while(it!=dynamic_array.rend())
	{
		cout << *it++ << endl;
	}
	return 0;
}