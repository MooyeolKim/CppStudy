#include <iostream>
#include "Stack.h"
using namespace std;

int main(void)
{
	char c;
	Stack<char> char_stack(10);
	char_stack.Push('A');
	char_stack.Push('B');
	char_stack.Push('C');
	while(!char_stack.Empty())
	{
		char_stack.Top(c);
		cout << c << endl;
		char_stack.Pop();
	}

	int i;
	Stack<int> int_stack(10);
	int_stack.Push(10);
	int_stack.Push(20);
	int_stack.Push(30);
	while(!int_stack.Empty())
	{
		int_stack.Top(i);
		cout << i << endl;
		int_stack.Pop();
	}

	return 0;
}