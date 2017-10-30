#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str("Hi! How are you?");
	string punctuation("!?.,");

	size_t found = str.find_first_of(punctuation);
	while(found!=string::npos)
	{
		str.insert(found, 2, str[found]);
		found = str.find_first_of(punctuation, found+3);
	}

	cout << str << endl;
	return 0;
}
