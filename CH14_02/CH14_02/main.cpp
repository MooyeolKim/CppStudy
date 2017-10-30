#include <iostream>
#include "Queue.h"
using namespace std;

int main(void)
{
	char c;
	Queue<char> char_queue(10);
	char_queue.Push('A');
	char_queue.Push('B');
	char_queue.Push('C');
	while(!char_queue.Empty())
	{
		char_queue.Front(c);
		cout << c << endl;
		char_queue.Pop();
	}

	int i;
	Queue<int> int_queue(10);
	int_queue.Push(10);
	int_queue.Push(20);
	int_queue.Push(30);
	while(!int_queue.Empty())
	{
		int_queue.Front(i);
		cout << i << endl;
		int_queue.Pop();
	}

	return 0;
}