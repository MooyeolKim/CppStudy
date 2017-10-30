#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	queue<int> int_queue;

	int_queue.push(10);
	int_queue.push(20);
	int_queue.push(30);

	while(!int_queue.empty())
	{
		cout << int_queue.front() << endl;
		int_queue.pop();
	}
	
	return 0;
}
