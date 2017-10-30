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

	vector<int>::iterator it=dynamic_array.begin();
	while(it!=dynamic_array.end())
	{
		cout << *it++ << endl;
	}
	return 0;
}