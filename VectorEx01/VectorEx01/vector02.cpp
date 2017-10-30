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

	//for(int i=0 ; i<dynamic_array.size() ; ++ i)
	for(int i=0 ; i<10 ; ++ i)
	{
		cout << dynamic_array[i] << endl;
		//cout << dynamic_array.at(i) << endl;

	}
	return 0;
}