#include <iostream>
#include <deque>
using namespace std;

int main(void)
{
	deque<int> double_ended(6);
	for(int i=0 ; i<6 ; ++i)
	{
		double_ended[i] = i;
	}

	double_ended.push_back(7);
	double_ended.push_front(8);

	for(int i=0 ; i<double_ended.size() ; ++i)
	{
		cout << double_ended[i] << endl;
	}
	return 0;
}