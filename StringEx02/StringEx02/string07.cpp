#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str("Hi! How are you?");

	cout << "String length : " << str.length() << endl;
	printf("%s\n", str.c_str());

	str.clear();
	if(str.empty())
	{
		cout << "Now string is empty." << endl;
		cout << "String length : " << str.length() << endl;
	}

	return 0;
}