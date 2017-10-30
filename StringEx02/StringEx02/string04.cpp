#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str("Hi! How are you?");
	string punctuation("!?.,");

	size_t found = str.find_last_of(punctuation);
	while(found!=string::npos)
	{
		str.erase(found, 1);
		found = str.find_last_of(punctuation, found);
	}

	cout << str << endl;
	return 0;
}
