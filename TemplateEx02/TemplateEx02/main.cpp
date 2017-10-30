#include <iostream>
#include "Array.h"
using namespace std;

int main(void)
{
	Array <char>data(10);
	int i;
	char val;

	for(i=0 ; i<10 ; i++)
	{
		if(!data.SetData(i, 'A'+i))
			cout << "Fail to set data" << endl;
		if(!data.GetData(i, val))
			cout << "Fail to get data" << endl;
		else
			cout << "Data = " << val << endl;
	}
	return 0;
}