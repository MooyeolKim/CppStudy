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

	for(int i=0 ; i<10 ; ++ i)
	{
		try
		{
			cout << dynamic_array.at(i) << endl;
			//cout << dynamic_array[i] << endl;
		}
		catch(out_of_range e)
		{
			cout << "Out of range" << endl;
		}
	}
	return 0;
}